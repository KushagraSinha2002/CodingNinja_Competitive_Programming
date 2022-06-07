#include<bits/stdc++.h>
using namespace std;

long Product(int n){
    if(n==1 || n==0){
        return 1;
    }
    int m = pow(10,9)+7;
    int res = Product(n-1);
    
    //(res*n)%m
    int res1 = res%m;
    int res2 = n%m;
    
    long ans1 = (long)res1*res2;
    long ans = (long)ans1%m;
    
    return ans;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<Product(n)<<endl;
	}
    return 0;
}