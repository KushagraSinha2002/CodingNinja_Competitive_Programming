#include<bits/stdc++.h>
using namespace std;

int totalMoney(int input[],int i,int n,int output[])
{

    if(i>n-1)
    {
        return 0;
    }

    if(output[i] > -1)
    {
        return output[i];
    }   

    int a,b;

    a = totalMoney(input,i+2,n,output) + input[i];
    b = totalMoney(input,i+1,n,output);


    output[i] = max(a,b);

    return output[i];
}
int main(){

    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];

    }
    int output[n];
    for(int i = 0; i < n; i++) output[i] = -1;
    cout<<totalMoney(input,0,n,output);
    return 0;
}