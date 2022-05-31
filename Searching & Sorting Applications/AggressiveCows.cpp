#include<bits/stdc++.h>
using namespace std;

bool check(int cows, long long position[], int n,long long distance){
    int count=1;
    int lastPosition = position[0];
    for(int i=0;i<n;i++){
        if(position[i]-lastPosition>=distance){
			count++;
            lastPosition = position[i];
        }
        if(count == cows){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,cows;
        cin >> n>> cows;
        long long position[n];
        for(int i=0; i<n; i++){
            cin >>position[i];
        }
        sort(position,position+n);
        long long start = 0;
        long long end = position[n-1] - position[0];
        long long ans = -1;
        while(start<=end){
            long long mid = start + (end-start)/2;
            if(check(cows,position,n,mid)){
                ans = mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        cout<< ans<<endl;
    }
    return 0;
}