#include <iostream>
#include <string>
#include <set>
using namespace std;

string uniqueChar(string str) {
	string answer;
    set<char> charset;
    
    for(char ch: str){
        if(charset.find(ch) == charset.end()){
            answer.push_back(ch);
            charset.insert(ch);
		}
    }
    return answer;
}

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}