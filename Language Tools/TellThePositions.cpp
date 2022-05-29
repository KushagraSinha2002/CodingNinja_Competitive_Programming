#include<bits/stdc++.h>
#include<utility>
#include<vector>
using namespace std;

bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
    if(a.second != b.second)
    {
		return (a.second > b.second);        
	}else
    {
        return(a.second < b.second);
    }
}

struct student
{
    string name;
    int totalMarks=0;
};
int main()
{
    int n;
    cin>>n;
    student studentArray[n];
    for(int i=0;i<n;i++)
    {
        cin>>studentArray[i].name;
        int marks;
        for(int j=0;j<3;j++)
        {
            cin>>marks;
            studentArray[i].totalMarks += marks;
        }
    }
	vector< pair <string, int> > vect;
	for(int i=0;i<n;i++)
    {
    	vect.push_back(make_pair(studentArray[i].name,studentArray[i].totalMarks));
    }
	sort(vect.begin(), vect.end(), sortbysec);
    for(int i=0;i<n;i++)
    {
        cout <<i+1<<" "<<vect[i].first<<endl;
    }
    return 0;
}