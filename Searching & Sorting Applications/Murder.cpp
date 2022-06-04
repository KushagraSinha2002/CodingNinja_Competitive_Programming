#include <bits/stdc++.h>

using namespace std;

long long merge(long long a[],int low,int high,int mid){
    int i=low,j=mid,k=0;
    int temp[high-low+1];
    long long count = 0;

    while(i<mid && j<=high){
        if(a[j]>a[i]){
            temp[k++] = a[i];
            count+= (a[i]*(high-j+1));
            i++;
        }else{
            temp[k++] = a[j++];
        }
    }
    while(i<mid){
        temp[k++] = a[i++];
    }
    while(j<=high){
        temp[k++]=a[j++];
    }
    for(int i=low,k=0;i<=high;i++,k++){
        a[i] = temp[k];
    }
    return count;

}

long long mergeSort(long long arr[],long long low,long long high){
    if(high>low){
        int mid = (low+high)/2;
        long long countLeft = mergeSort(arr,low,mid);
        long long countRight = mergeSort(arr,mid+1,high);
        long long countMerge = merge(arr,low,high,mid+1);
        return countLeft+countRight+countMerge;
    }
    return 0;
}

long long getInversions(long long *arr, int n){
    long long ans = mergeSort(arr,0,n-1);
    return ans;
}

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		//n== number of stairs;
		long long *arr=new long long [n];
		for(long long i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		cout<<getInversions(arr, n)<<endl;
	}
}