#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

struct Interval
{
  int st;
  int et;
};

bool
compare (Interval i1, Interval i2)
{
  return i1.st < i2.st;
}

int
main ()
{
  // Interval arr[] = {{6,4}, {3,4}, {4,6}, {8,13}};

  // sort(arr, arr+4, compare);

  // for(int i=0; i<4;i++){
  //   cout << arr[i].st << " : " << arr[i].et << endl;
  // }

  int arr[] = { 1, 3, 2, 5, 3, 7, 6 };

  // sort(arr,arr+6, greater<int>());

  sort (arr, arr + 6);

  for (int i = 0; i < 6; i++)
    {
      cout << arr[i] << " ";
    }

  cout << endl;

  cout << "binary_search "<< binary_search(arr, arr + 6, 2) << endl; // gives ans 0 OR 1
  
  cout <<  "lower_bound "<<lower_bound(arr, arr+6, 3) - arr << endl;
  cout << "upper_bound " <<upper_bound(arr, arr+6, 3) - arr << endl;
  
  cout << "__gcd(10,6) "<< __gcd(10,6) << endl;
  
  cout << "pow(2,5) "<<pow(2,5) << endl;

  return 0;

}
