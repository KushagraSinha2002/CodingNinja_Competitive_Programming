#include<bits/stdc++.h>
using namespace std;

long NumBTS(int h){
    if(h==1 || h==0){
        return 1;
    }
    int m = 1000000000+7;
    long x = NumBTS(h-1);
    long y = NumBTS(h-2);
    
    long res1 = x*x;
	long res2 = x*y*2;

	int ans1 = (res1%m);
	int ans2 = (res2%m);

	int ans = (ans1+ans2)%m;
    
    return ans;
}

int main(){
    int t,h;
    cin>>t;
    while(t--){
        cin>>h;
        cout<<NumBTS(h)<<endl;
    }
    return 0;
}