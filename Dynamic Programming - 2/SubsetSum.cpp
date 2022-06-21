#include<bits/stdc++.h>
using namespace std;

bool SubsetSum(int arr[],int n,int sum){
    bool dp[n+2][sum+1];
    //Initialise i==0 with flase && j==0 with true
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                dp[i][j] = false;
            }
            if(j==0){
                dp[i][j] = true;
            }
        }
    }
	//choice
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
            }
            if(arr[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum;
        cin>>sum;

        if(SubsetSum(arr,n,sum) == true){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}