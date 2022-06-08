/*
Question Link = https://codeforces.com/problemset/problem/1037/C?f0a28=1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int cost = 0;
    
    for(int i=0;i<n;){
        if(s[i] != t[i]){
            //Either Swap or flip and increment the cost
            if( i+1 < n && s[i] != s[i+1] && s[i+1] != t[i]){
                //Swaping
                i+=2;
            }else{
                //Flip
                i++;
            }
            cost++;
        }else{
            i++;
        }
    }
    cout<<cost<<endl;
    return 0;
}