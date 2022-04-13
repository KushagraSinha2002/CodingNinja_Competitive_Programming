#include <iostream>
#include <vector>
#include<string>

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
    
    // String
    
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
    
    
    
    return 0;
    
}
