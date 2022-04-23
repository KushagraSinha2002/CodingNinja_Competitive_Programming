#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    cout << "<==Vector==>" << endl << endl;
    
    vector<int> v;

    vector<int>:: iterator it;
    
    for(int i=0; i<5; i++){
        v.push_back(i+1);
    }
    
    for(it=v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }
    
    cout << endl << "<==Vector==>" << endl;
    
    cout <<"------------------------";
    
    cout << endl<< "<==String==>" << endl<<endl;
    
    string s = "Kushagra";
    cout << s<<endl;
    
    string s1(s);
    cout << s1<<endl;
    
    string s2(s,2,4);
    cout << s2<<endl;
    
    string s3 = s.substr(1,4);
    cout << s3<< endl;
    
    if(s1.compare(s2) == 0){
        cout << s1 <<" is equal to " << s2<<endl;
    }else{
        cout << s1 <<" isn't equal to " << s2 << endl;
    }
    
    cout << endl<< "<==String==>" << endl;
    
    cout <<"------------------------";

    return 0;
}
