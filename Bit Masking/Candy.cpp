// Recurssion + Memoization

#include<bits/stdc++.h>
using namespace std;

long long candies(int like[][16],int n){
    long long dp[1 << n] = {0};
    dp[0] = 1;
    for(int mask=0 ; mask < ((1<<n)-1) ; mask++) {
        int temp = mask;
        int k = 0;
        while(temp>0) {
            if(temp % 2 == 1) k++;
            temp=temp/2;
        }

        for(int j = 0 ; j < n ; j++) {
            if(!(mask&(1<<j)) && like[k][j]==1) {
                dp[mask |(1<<j)]+=dp[mask];
            }
        }
    }
    return dp[(1<<n)-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int like[16][16];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>like[i][j];
            }
        }
        cout<<candies(like,n)<<endl;
    }
    return 0;
}