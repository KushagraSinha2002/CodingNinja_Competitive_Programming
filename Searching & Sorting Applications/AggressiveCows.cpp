#include<bits/stdc++.h>
#include<vector>
#include<map>
#define lli long long int

using namespace std;


bool ispossibleCows(int *arr, int n, int dmid, int cows){
    int tempcows = cows;
    tempcows--;
    int lastcow = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] - arr[lastcow] >= dmid){
            lastcow = i;
            tempcows--;
        }
    }
    if (tempcows <= 0){
    	return true;
    }
    else{
    	return false;
    }
}
void aggresiveCows(int *arr, int n, int dmin, int dmax, int cows){
    int dmid = (dmin + dmax) / 2;
    if (dmin > dmax){
        cout << dmax << endl;
        return;
    }
    if (ispossibleCows(arr, n, dmid, cows)){
    	aggresiveCows(arr, n, dmid + 1, dmax, cows);
    }
    else{
    	aggresiveCows(arr, n, dmin, dmid - 1, cows);
    }
}

int main(){
    int t;
    
    cin>>t;
    while(t--){
        int n,c;
        cin>>n;
        cin>>c;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
		}
        sort(arr,arr+n);
        int st=0,en;
        en = arr[n-1];
        aggresiveCows(arr,n,st,en,c);
    }
    return 0;
}