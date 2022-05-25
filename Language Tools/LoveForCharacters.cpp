#include<iostream>
#include<map>
#include<cstring>
#include <vector>
using namespace std;

void printOccurence(string s,int t){
    map<char,vector<int>> m;
    for(int i=0;i<t;i++){
        m[s[i]].push_back(i);
	}
    cout<<m['a'].size() << " ";
    cout<<m['s'].size() << " ";
    cout<<m['p'].size();
}

int main()
{
    int t;
    cin>>t;
    string s;
    cin >> s;
    printOccurence(s,t);
	return 0;
}
