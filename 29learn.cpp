#include <iostream>
#include <vector>
using namespace std;
// TOPIC advanced sortings

// QUES merge sort
// BUG not working
// write the merge function of merge sort 
void merge(int v[], int left, int mid, int right) {
    int temp[right - left + 1];
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (v[i] < v[j]) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = v[i++];
    }
    while (j <= right) {
        temp[k++] = v[j++];
    }
    for (int i = 0; i <right-left+1; i++) {
        v[left + i] = temp[i];
    }
}
// void merge(int arr[],int l,int mid,int r){
//     int n1= mid+1-l;
//     int n2= r-mid;
    
//     int a[n1]={0};
//     int b[n2]={0};
    
//     for (int i=0;i<n1;i++){
//         a[i] = arr[l+i];
//     }
//     for (int i=0;i<n2;i++){
//         b[i] = arr[mid+1+i];
//     }
//     int m =0,n=0,o=l;
//     while (m<n1 && n<n2){
//         if(a[m]>b[n]){
//             arr[o]=a[m];
//             m++;
//             o++;
//         }
//         else{
//             arr[0]=b[n];
//             n++;
//             o++;
//         }
//     }

//     while(m<n1){
//         arr[o]=a[m];
//             m++;
//             o++;
//     }
//     while(n<n2){
//         arr[0]=b[n];
//             n++;
//             o++;

//     }
//     return ;
// }
void mergeSort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        return;

}



//QUES quick sort

int main(){
    int arr[]={7,1,2,3,1,4};

    mergeSort(arr,0,5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}