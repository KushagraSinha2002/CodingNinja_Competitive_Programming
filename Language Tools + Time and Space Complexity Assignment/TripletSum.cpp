#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


void FindTriplet(int *arr, int size, int x) {
    
}

int tripletSum(int *arr, int n, int num)
{
    int ans=0;
    sort(arr, arr+n);
	for (int i = 0; i < n; i++)
	{
		int val = num-arr[i];
		int j = i+1;
		int k = n-1;
		while(j<k ){
			
			
			if (arr[j]+arr[k]>val)	
			{
				k--;

			}else if (arr[j]+arr[k]<val)
			{
				j++;

			}else{
                
				int leftcount = 0;
				int rightcount = 0;
				
				for (int ptr = j; ptr <= k; ++ptr)
				{
					if (arr[ptr] == arr[j])
					{
						leftcount++;
					}else
						break;
				}
				for (int ptr = k; ptr >= j; ptr--)
				{
					if (arr[ptr] == arr[k])
					{
						rightcount++;
					}else
						break;
				}

				int total = leftcount*rightcount;
				if (arr[j]==arr[k])
				{
					total = ((k-j+1)*(k-j))/2;
				}
				for(int m=0;m<total;m++){
					ans++;
		
				}

				j +=leftcount;
				k=k-rightcount;
			}
		}
	}
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;
        

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}