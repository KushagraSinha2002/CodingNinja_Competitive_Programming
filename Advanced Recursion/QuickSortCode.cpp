#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
        
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}
void quickSort(int arr[],int l,int h){
    if(l<h){
        int poi=partition(arr,l,h);
        quickSort(arr,l,poi-1);
    quickSort(arr,poi+1,h);
    }
    
}

void quickSort(int input[], int size) {
    quickSort(input,0,size-1);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    cout<<"\n";
    delete [] input;
    }
}