#include <iostream>
using namespace std;

// sort any size array with merge sort
int sortArray(int arr[], int n){
    if(n<=1)
        return 0;
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++){
        left[i] = arr[i];
    }
    for(int i=mid;i<n;i++){
        right[i-mid] = arr[i];
    }
    sortArray(left,mid);
    sortArray(right,n-mid);
    //define merge function
    void merge(int[],int[],int[],int,int);
    
    //declare merge function
    merge(left,right,arr,mid,n);
    return 0;
}

void merge(int left[], int right[], int arr[], int mid, int n){
        int i=0,j=0,k=0;
        while(i<mid && j<n-mid){
            if(left[i]<right[j]){
                arr[k] = left[i];
                i++;
            }
            else{
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        while(i<mid){
            arr[k] = left[i];
            i++;
            k++;
        }
        while(j<n-mid){
            arr[k] = right[j];
            j++;
            k++;
        }
    }

int main(){

// array containing reverse order rumbers of length 50
int arr[50]= {0,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
//class containing merge sort function

class Mergesort{
    public:
        void mergeSort(int arr[], int n){
            sortArray(arr,n);
        }
};

sortArray(arr,50);

//itrate array and print the numbers
for(int i=0;i<50;i++){
    cout<<arr[i]<<endl; 
}
}