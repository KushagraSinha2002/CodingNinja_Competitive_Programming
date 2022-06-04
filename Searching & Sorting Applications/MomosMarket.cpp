#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int getAnswer(ll prefix[],ll x,int start, int end){
    int ans = - 1 ; 
    while ( start <= end ) { 
        int mid = ( start+ end ) / 2 ; 
        if ( prefix [mid] <= x ) { 
            ans = max(ans,mid); 
            start = mid + 1 ; 
        }else { 
        	end = mid - 1 ;
         } 
    }
    return ans ;

}

int main(){
    int n,q;
    cin>>n;
    ll price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    cin>>q;
    ll saving[q];
    for(int i=0;i<q;i++){
        cin>>saving[i];
    }
    ll prefix[n];
    prefix[0] = price[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+price[i];
    }
    for(int i=0;i<q;i++){
        ll x = saving[i];
        int index = getAnswer(prefix,x,0,n-1);
		ll momoCount = index+1;
        ll moneyLeft=x;
        if(index!=-1)
         moneyLeft= moneyLeft-prefix[index];
        cout << momoCount<<" "<<moneyLeft<<endl;
    }
    return 0;
}