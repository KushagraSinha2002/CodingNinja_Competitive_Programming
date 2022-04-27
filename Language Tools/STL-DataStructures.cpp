#include<iostream>
#include<vector>
#include<string>
#include<utility> // Pair
#include<set>
#include<map>
#include<unordered_map>


using namespace std;

int main()
{
    cout <<"------------------------";
    cout << endl << "<== Vector ==>" << endl << endl;
    
    vector<int> v;

    vector<int>:: iterator it_vector;
    
    for(int i=0; i<5; i++){
        v.push_back(i+1);
    }
    
    for(it_vector=v.begin(); it_vector != v.end(); it_vector++){
        cout<<*it_vector<<endl;
    }
    
    cout << endl << "<== Vector ==>" << endl;
    
    cout <<"------------------------";
    
    cout << endl<< "<== String ==>" << endl<<endl;
    
    string s = "Kushagra";
    cout << s<<endl;
    
    string s1(s);
    cout << s1<<endl;
    
    string s2(s,2,4);
    cout << s2<<endl;
    
    string s3 = s.substr(1,4);
    cout << s3<< endl;
    
    if(s1.compare(s2) == 0){
        cout << "'"<< s1 <<"' is equal to '" << s2 << "'" << endl;
    }else{
        cout << "'"<< s1 <<"' isn't equal to '" << s2 << "'" << endl;
    }
    
    cout << endl<< "<== String ==>" << endl;
    
    cout <<"------------------------";
    
    cout << endl << "<== Pair ==>" << endl << endl;
    
    pair<int,char> p1;
    pair<int,char> p2(1,'a');
    
    p1 = make_pair(2,'b');
    
    cout << p2.first<<" : "<<p2.second<<endl;
    
    cout << p1.first<<" : "<<p1.second<<endl;
    
    cout << endl << "<== Pair ==>" << endl;
    
    cout <<"------------------------";
    
    cout << endl << "<== Set ==>" << endl << endl;
    
    set<int> set1;
    int arr_set[] = {1,2,3,4,5,6,5};
    
    for(int i=0; i<7; i++){
        set1.insert(arr_set[i]);
    }
    
    set<int>:: iterator it_set;
    
    for(it_set=set1.begin(); it_set != set1.end(); it_set++){
        cout << *it_set<<endl;
    }
    
    if(set1.find(6) == set1.end()){
        cout<<"Element not found" << endl;
    }else{
        cout <<"Element found" << endl;
    }
    
    cout << endl << "<== Set ==>" << endl;
    
    cout <<"------------------------";
    
    cout << endl << "<== Map ==>" << endl << endl;
    
    int arr_map[] = {1,2,3,4,5,6,5};

    map<int,int> m;

    for(int i=0; i<7; i++){
        m[arr_map[i]] = m[arr_map[i]]+1;
    }

    map<int,int>:: iterator it_map;

    for(it_map=m.begin(); it_map!=m.end(); it_map++){
        cout << it_map->first << " : " << it_map->second << endl;
    }
    
    cout << endl;
    m.erase(1);//erases key
    
    for(it_map=m.begin(); it_map!=m.end(); it_map++){
        cout << it_map->first << " : " << it_map->second << endl;
    }
    
    cout << endl << "<== Map ==>" << endl;
    
    cout <<"------------------------";
    
    cout << endl << "<== Unordered Map ==>" << endl << endl;
    
    int arr_map_unordered[] = {1,2,3,4,5,6,5};

    unordered_map<int,int> m_unordered;

    for(int i=0; i<7; i++){
        m_unordered[arr_map_unordered[i]] = m_unordered[arr_map_unordered[i]]+1;
    }

    unordered_map<int,int>:: iterator it_uordered_map;

    for(it_uordered_map=m_unordered.begin(); it_uordered_map!=m_unordered.end(); it_uordered_map++){
        cout << it_uordered_map->first << " : " << it_uordered_map->second << endl;
    }
    
    cout << endl;
    m.erase(1);//erases key
    
    for(it_map=m.begin(); it_map!=m.end(); it_map++){
        cout << it_map->first << " : " << it_map->second << endl;
    }
    
    cout << endl << "<== Unordered Map ==>" << endl;
    
    cout <<"------------------------";

    return 0;
}
