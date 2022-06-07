#include<bits/stdc++.h>
using namespace std;

long power(int x,int y){
    if(y==1){
        return x;
    }else if(y==0){
        return 1;
    }
    int m = pow(10,9)+7;
    int res = power(x,y-1);
    
    long res1 = (long)res*x;
    long ans = res1%m;
    
    return ans;
}

int main(){
	int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cout<<power(x,y)<<endl;
    }
    return 0;
}