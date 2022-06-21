// ITERATIVE APPROACH

#include<bits/stdc++.h>
using namespace std;

int dp[10002][1002];

int knapsack(int wt[],int val[],int n,int capacity){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<capacity+1;j++){
            if(wt[i-1] <= j){
                dp[i][j] = max((val[i-1]+dp[i-1][j-wt[i-1]])
                               ,dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][capacity];
}

int main(){
    int n,capacity;
    cin>>n;
    int wt[n],val[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    cin>>capacity;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<capacity+1;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
        }
    }
    cout<<knapsack(wt,val,n,capacity)<<endl;
    return 0;
}