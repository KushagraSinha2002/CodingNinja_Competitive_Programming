// RECURSIVE APPROACH

#include<bits/stdc++.h>
using namespace std;

int dp[10002][1002];
int knapsack(int wt[],int val[],int n,int capacity){
    //Base Condition
    if(n == 0 || capacity == 0){
        return 0;
    }
    //check dp[]
    if(dp[n][capacity] != -1){
        return dp[n][capacity];
    }
    //Choice
    if(wt[n-1]<=capacity){
        return dp[n][capacity] = (max(val[n-1] + knapsack(wt,val,n-1,capacity-wt[n-1]),
                                knapsack(wt,val,n-1,capacity)));   
    }else if(wt[n-1]>capacity){
        return dp[n][capacity] = knapsack(wt,val,n-1,capacity);
    }
    return dp[0][0];
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
    cout<<knapsack(wt,val,n,capacity)<<endl;
    return 0;
}