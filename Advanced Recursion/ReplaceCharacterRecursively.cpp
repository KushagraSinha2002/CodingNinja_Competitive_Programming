#include<bits/stdc++.h>
using namespace std;

void Replace_Character_Recursively(char str[],char key, char value){
    if(str[0] == '\0'){
        return;
	}
    if(str[0] == key){
        str[0] = value;
    }
    Replace_Character_Recursively(str+1,key,value);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        char str[100];
        cin >> str;
        char key,value;
        cin >> key>>value;
        Replace_Character_Recursively(str,key,value);
        cout << str<<endl;
    }
    return 0;
}