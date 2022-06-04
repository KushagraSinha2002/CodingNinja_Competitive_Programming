#include <bits/stdc++.h>
using namespace std;

typedef long long ll;  // 2 3 3 9 

ll ans = 0;

bool check(ll a[],ll start,ll end,ll candy,int n,ll k,ll ans){
    if(k==1){
        return true;
    }
    for(int i=0; i<n; i++){
        ans += (a[i]/candy);
    }
    if(ans>=k){
        //cout << "ans = "<<ans <<"candy = "<<candy<< endl;
        return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        ll *a = new ll[n];
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll start = 0;
        ll end = a[n-1];
        ll mid = 0;
        //ll ans=0;
        while(start <= end){
            ans = 0;
            mid = (start+end)/2;
            if(check(a,start,end,mid,n,k,ans)){
                //cout <<"HIT = "<< ans<< "Candy = "<<mid<<endl;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        cout<<start-1<<endl;
    }
    return 0;
}