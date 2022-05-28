#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    
    
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    
     for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }
    
    int ans = 0;
    
   for(int i = 0; i<n; i++){
         int cnt = 0; 
    for(int j = 0; j<n; j++){
    
        if(arr1[i] >= arr1[j] && arr1[i] <= arr2[j]){
            cnt++;
        }
        
       }
       
       ans = max(ans,cnt);
    }
    
    cout<<ans;
    
}