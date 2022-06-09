#include<bits/stdc++.h>
using namespace std;
int mod = pow(10,9)+7;
long AlphaCode(string s,int size){
    long *output = new long[size+1];
    output[0] = 1;
    output[1] = 1;
    int num1=0,num2=0,num3=0,num4=0;
    for(int i=2;i<=size;i++){
        output[i] = output[i-1];
        num1 = s[i-1]-'0';
        num2 = s[i-2]-'0';
        if(num2*10+num1 <= 26 && num2*10+num1>0){
            //output[i] += output[i-2];
            output[i] = output[i]%mod;
            output[i-2] = output[i-2]%mod;
            long res1 = output[i] + output[i-2];
            output[i] = res1%mod;
        }else if(num2*10+num1 == 0){
            return 0;
        }
    }
    long ans = (long)output[size];
    delete [] output;
    return ans%mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int size = s.length();
        if(size == 0 || size == 1){
            cout<<1<<endl;
            continue;
		}
        cout<<AlphaCode(s,size)<<endl;
    }
    return 0;
}