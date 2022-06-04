#include <bits/stdc++.h>

long long merge(long long a[],int low,int high,int mid){
    int i=low,j=mid,k=0;
    int temp[high-low+1];
    long long count = 0;
    
    while(i<mid && j<=high){
        if(a[i]<=a[j]){
            temp[k++] = a[i++];
        }else{
            temp[k++] = a[j++];
            count+= mid-i;
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