#include<algorithm>
#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    int i=0;
    sort(arr,arr+n);
    for(i=0; i<n; i++){
        if(arr[i]==arr[i+1]&&n>1){
            return arr[i];
            
        }
    }
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}