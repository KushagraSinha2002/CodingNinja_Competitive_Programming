#include<bits/stdc++.h>
#include<utility>
#include<vector>
using namespace std;

struct student
{
    string name;
    int totalMarks=0;
    int roll;
};

bool sortbysec(student *a,student *b)
{
    if(a->totalMarks != b->totalMarks)
    {
        return (a->totalMarks > b->totalMarks);        
    }
    return (a->roll<b->roll);
}


int main()
{
    int n;
    cin>>n;
    student** studentArray=new student*[n];
    for(int i=0;i<n;i++)
    {
        studentArray[i]=new student();
    }
    for(int i=0;i<n;i++)
    {
        cin>>studentArray[i]->name;
        studentArray[i]->roll=i+1;
        int marks1,m2,m3;
        cin>>marks1>>m2>>m3;
        studentArray[i]->totalMarks += (marks1+m2+m3);
    }
    sort(studentArray, studentArray+n, sortbysec);
    for(int i=0;i<n;i++)
    {
        cout <<i+1<<" "<<studentArray[i]->name<<endl;
    }
    return 0;
}