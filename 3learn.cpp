#include<iostream>
using namespace std;

int total(int* num,int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=*(num++);
    }
    return sum;

};


int main(){
    
    int a=3 ;
    int* b=&a;       // & a means the address of a 
    cout<<*b<<endl;


    // cout<<"value at address "<<b<<" is: "<< *b<<endl;
    
    ////////// arrays /////////
    int arr[5] ={1,3,4,6,7};
    // cout <<arr[3]<<endl;
    
    ////////// passing array into a funtion //////////

    int sum = total(arr,5);   /// here arr is same as &arr[0]
    cout <<sum<<endl;

}
