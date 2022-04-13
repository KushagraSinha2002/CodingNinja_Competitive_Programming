#include<iostream>
#include<string> // string
#include<utility> // pair
#include<set> // set
#include<vector> // vector
#include<map> // map
#include<unordered_map> // unordered_map

using namespace std;

int main()
{
    
    /* VECTOR
    
    vector<int> v;
    
    for(int i=0; i<5; i++){
        v.push_back(i+1);
    }9
    
    vector<int>:: iterator it;
    
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    };
    
    */
    
    /* String
    
    string s = "Kushagra";
    string s1(s,2,4);
    cout << s << endl << s1 << endl;
    
    string s2 = s.substr(1,4);
    cout << s2<<endl;
    
    if(s1.compare(s2) == 0){
        cout << s1 << " is equal to " << s << endl;
    }else{
        cout << s1 <<" is'nt equal to " << s << endl;
    }
    
    */
    
    
    
    /* Pair
    
    pair<int,char> p;
    pair<int,char> p1(1,'a');
    p = make_pair(2,'b');
    
    cout << p1.first << " " << p1.second << endl;
    cout << p.first << " " << p.second << endl;
    
    */
    
    
    
    /* Set
    
    set<int> s;
    int arr[] = {1,2,3,4,5,6,5};
    
    for(int i=0; i<7; i++){
        s.insert(arr[i]);
    }
    
    set<int>:: iterator it;
    
    for(it=s.begin(); it!=s.end(); it++){
        cout <<*it<<endl;
    }
    
    if(s.find(7) == s.end()){
        cout << "Element Not Found" << endl;
    }else{
        cout << "Element Found" << endl;
    }
    
    */
    
    
    
    /* Map
    
    int arr[] = {1,2,3,4,5,6,5};
    map<int,int> m;
    
    for(int i=0; i<7; i++){
        m[arr[i]] = m[arr[i]] + 1;
    }
    
    map<int,int>:: iterator it;
    
    for(it=m.begin(); it!= m.end(); it++){
        cout << it->first << " : " << it->second <<endl;
    }
    
    */
    
    
    // NOTE : Use unordered_map instead of map due to better time complexity but in unordered_map the order is not maintained
    
    
    /* Unordered_Map
    
    int arr[] = {1,2,3,4,5,6,5};
    unordered_map<int,int> m;
    
    for(int i=0; i<7; i++){
        m[arr[i]] = m[arr[i]] + 1;
    }
    
    unordered_map<int,int>:: iterator it;
    
    for(it=m.begin(); it!= m.end(); it++){
        cout << it->first << " : " << it->second <<endl;
    }
    
    */
    
    return 0;
    
}
