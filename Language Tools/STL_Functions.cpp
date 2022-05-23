#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>

using namespace std;

struct Interval{
    int st;
    int et;
};

bool compare(Interval i1, Interval i2){
    return i1.st < i2.st;
}

int main ()
{
   cout <<"------------------------";
   cout << endl << "<== Sort Array ==>" << endl << endl;
    
   int arr_sort[] = {1,2,4,3,6,5};
   sort(arr_sort,arr_sort+6);
   for(int i=0; i<6; i++){
       cout<<arr_sort[i]<< " ";
   }
   cout<<endl << endl;
   
   cout<<"To sort in decreasing order use"<<endl<<"sort(arr_sort,arr_sort+6,greater<int>());"<<endl<<endl;
   
   sort(arr_sort,arr_sort+6,greater<int>());
   for(int i=0; i<6; i++){
       cout<<arr_sort[i]<< " ";
   }
   
   cout <<endl<< endl << "<== Sort Array ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== Sort Interval ==>" << endl << endl;
   
   Interval arr_sortInterval[] = {{6,4},{3,4},{4,6},{8,13}};
   sort(arr_sortInterval,arr_sortInterval+4,compare);
   for(int i=0;i<4;i++){
       cout<<arr_sortInterval[i].st<<" : " <<arr_sortInterval[i].et;
   }
   
   cout <<endl<< endl << "<== Sort Interval ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== Binary Search ==>" << endl << endl;
   
   int arr_binarySearch[] = {1,2,4,5,6,9};
   cout << binary_search(arr_binarySearch,arr_binarySearch+9,30); // Return True:1 OR False:0
   
   cout <<endl<< endl << "<== Binary Search ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== Lower_Bound() ==>" << endl << endl;
   
   int arr_lower_bound[] = {1,2,4,5,6,9};
   cout << lower_bound(arr_lower_bound,arr_lower_bound+6,4)<<endl; // Return's pointer to the index
   
   cout << lower_bound(arr_lower_bound,arr_lower_bound+6,30) - arr_lower_bound; // Return's pointer to the index
   
   cout <<endl<< endl << "<== Lower_Bound() ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== Upper_Bound() ==>" << endl << endl;
   
   int arr_upper_bound[] = {1,2,4,5,6,9};
   cout << upper_bound(arr_upper_bound,arr_upper_bound+6,4)<<endl; // Return's pointer to the index
   
   cout << upper_bound(arr_upper_bound,arr_upper_bound+6,30) - arr_upper_bound; // Return's pointer to the index
   
   cout <<endl<< endl << "<== Upper_Bound() ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== GCD ==>" << endl << endl;
   
   cout <<__gcd(10,6);
   
   cout <<endl<< endl << "<== GCD ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== POW ==>" << endl << endl;
   
   cout <<pow(2.2,5);
   
   cout <<endl<< endl << "<== POW ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== Swap ==>" << endl << endl;
   
   int x=10,y=12;
   
   swap(x,y);
   cout <<"X = "<<x<<" & Y = "<<y;
   
   cout <<endl<< endl << "<== Swap ==>" << endl;
   cout <<"------------------------";
   
   cout <<"------------------------";
   cout << endl << "<== Maximum / Minimum ==>" << endl << endl;
   
   int a=10,b=12;
   
   cout <<max(x,y)<<endl;
   cout <<min(x,y);
   
   cout <<endl<< endl << "<== Maximum / Minimum ==>" << endl;
   cout <<"------------------------";

  return 0;

}
