#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll getCost(string s,ll n,ll x,ll y){
    ll toggle = 0;
    if(s[0] == '0'){
        toggle+=1;
	}
    for(int i=0;i<n;i++){
        if(s[i] == '1' && s[i+1] == '0'){
            toggle+=1;
        }
    }
    if(toggle == 0){
        return 0;
    }
    return (toggle-1)*min(x,y)+y;
}

int main(){
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    cout<<getCost(s,n,x,y)<<endl;
    return 0;
}