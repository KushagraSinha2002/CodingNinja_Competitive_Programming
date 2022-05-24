#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> getVoters(int arr[],int size){
    sort(arr,arr+size);
    vector<int> voters;
    int j=0;
    for(int i=0;i<size;i=j){
        int count=0;
        for(j=i;arr[j]==arr[i];j++){
            count++;
        }
        if(count>=2){
            voters.push_back(arr[i]);
        }
    }
    return voters;
}

int main() {
	int x,y,z;
    cin>>x>>y>>z;
    int size=(x+y+z);
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    vector<int> v = getVoters(arr,size);
    cout<<v.size()<<endl;
    vector<int>:: iterator it_vector;
    for(it_vector=v.begin(); it_vector != v.end(); it_vector++){
        cout<<*it_vector<<endl;
    }
    
	return 0;
}