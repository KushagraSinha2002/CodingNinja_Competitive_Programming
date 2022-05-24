#include <iostream>
#include <cstring>
#include<map>
using namespace std;

char nonRepeatingCharecter(string str){
    map<char,int> frequency;
    for(int i=0;i<str.length();i++){
        frequency[str[i]] = frequency[str[i]]+1;
    }
    
    for(int i=0;i<str.length();i++){
        if(frequency[str[i]]==1){
            return str[i];
        }
    }
    return str[0];
}

int main(){
    string str = "aDcadhc";
    cout << nonRepeatingCharecter(str);
}