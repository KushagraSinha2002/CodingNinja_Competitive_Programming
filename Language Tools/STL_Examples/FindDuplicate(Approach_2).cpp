#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> removeDuplicates(vector<int> input){
    vector<int> result;
    sort(input.begin(),input.end());

    result.push_back(input[0]);
    for(int i=1; i<input.size();i++){
        if(input[i] != input[i-1]){
            result.push_back(input[i]);
        }else{
            continue;
        }
    }
    return result;
}