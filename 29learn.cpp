#include <iostream>
#include <vector>
using namespace std;
// TOPIC advanced sortings

// QUES merge sort
// BUG not working
void merge(int arr[],int l,int mid,int r){
    int a[mid+1-l]={0};
    int b[r-mid]={0};
    
    for (int i=0;i<mid+1-l;i++){
        a[i] = arr[l+i];
    }
    for (int i=0;i<r-mid;i++){
        b[i] = arr[mid+1+i];
    }

    int m =0,n=0,o=l;
    while (m<mid+1-l && n<r-mid){
        if(a[m]>b[n]){
            arr[o]=a[m];
            m++;
            o++;
        }
        else{
            arr[0]=b[n];
            n++;
            o++;
        }
    }

    while(m<mid+1-1){
        arr[o]=a[m];
            m++;
            o++;
    }
    while(n<r-mid){
        arr[0]=b[n];
            n++;
            o++;

    }
}
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r/2);
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

//QUES quick sort

int main(){
    int arr[]={1,2,3,7,1,4};

    mergeSort(arr,0,5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}