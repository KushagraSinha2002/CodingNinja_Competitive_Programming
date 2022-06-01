#include<bits/stdc++.h>
using namespace std;

void left_shift(char str[]){
    int i;
    for(i=0; str[i] != '\0'; i++){
        str[i] = str[i+1];
    }
    str[i] = '\0';
}

void Remove_Duplicates_Recursively(char str[]){
    if(str[0] == '\0'){
        return;
    }
    if(str[0] == str[1]){
        left_shift(str);
        Remove_Duplicates_Recursively(str);
    }
    Remove_Duplicates_Recursively(str+1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        char str[10000];
        cin >> str;
        Remove_Duplicates_Recursively(str);
        cout << str<<endl;
    }
    return 0;
}