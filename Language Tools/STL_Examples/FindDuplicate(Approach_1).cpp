#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> removeDuplicates(vector<int> input){
    set<int> s;
    vector<int> result;

    for(int i=0; i<input.size(); i++){
        if(s.find(input[i]) == s.end()){
            s.insert(input[i]);
            result.push_back(input[i]);
        }
    }

    return result;

}