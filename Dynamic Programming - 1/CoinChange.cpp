/*

Coin Change Problem

You are given an infinite supply of coins of each of denominations D = {D0, D1, D2, D3, ...... Dn-1}. You need to figure out the total number of ways W, in which you can make a change for Value V using coins of denominations D.
Note : Return 0, if change isn't possible.
W can be pretty large so output the answer % mod(10^9 + 7)

Input Format
First line will contain T (number of test case), each test case is consists of 3 three lines.
Line 1 : Integer n i.e. total number of denominations
Line 2 : N integers i.e. n denomination values
Line 3 : Value V

Output Format
For each test case print the number of ways (W) % mod(10^9 +7) in new line.
Constraints :
1 <= T <= 10
1 <= N <= 10
1 <= V <= 5000

*/

#include<bits/stdc++.h>
using namespace std;

int mod = pow(10,9)+7;

long dp[11][5001];
long getCoinChange(int lenD,long *d,int target,int i){
    if(target == 0){
        return 1;
    }
    
    if(i == lenD){
        return 0;
    }
    
    if(dp[i][target]!= 0)
        return dp[i][target];
        
    long noTake = getCoinChange(lenD, d, target,i+1);
    noTake = noTake%mod;
    
    long take = 0;
    
    if(d[i] <= target){
        take = getCoinChange(lenD, d, target-d[i],i);
        take = take%mod;
    }
    
    long ans = take+noTake;
    return dp[i][target]=ans%mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int lenD;
        cin>>lenD;
        long *d = new long[lenD];
        for(int i=0;i<lenD;i++){
            cin>>d[i];
        }
        int target;
        cin>>target;
        
        memset(dp,0,sizeof dp);
        cout<<getCoinChange(lenD,d,target,0)<<endl;
    }
    return 0;
}