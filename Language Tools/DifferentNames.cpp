#include<iostream>
#include<unordered_map>
#include<sstream>
#include<string>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    unordered_map<string,int> freq;
    
    // Used for breaking words
    stringstream stream(str);
    
    do{
        // To store individual words
    	string word;
        stream >> word;
        ++freq[word];
    }while(stream);
    
    bool isNamePrinted = false;
    
    for(auto pair: freq){
        if(pair.second > 1){
            isNamePrinted = true;
            cout << pair.first<<" "<<pair.second<<endl;
        }
    }
    if(!isNamePrinted){
        cout<< -1;
    }
    
}