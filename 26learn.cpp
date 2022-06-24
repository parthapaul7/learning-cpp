#include <iostream>
#include <string>
using namespace std;
// TOPIC: recursion

// QUES find gcd with recursion
int gcdWithRec(int a, int b){
    if( b == 0){
        return a;
    }
    int r = a%b;
    a = b;
    b = r;
    return gcdWithRec(a, b);
}
int lcmFromGcd(int n,int m){
    return n*m/gcdWithRec(n,m); 
}

//QUES check if sorted or not 
bool isSorted(int arr[],int n){
    if(n <=1){
        return true;
    }

    return (arr[0]<=arr[1] && isSorted(arr+1,n-1));
}

//QUES find the first and last occurance of a number 
int firstOccurance(int arr[],int n, int i, int key ){
    if(i==n){
        return -1;
    }
    if( arr[i] == key){
        return i;
    }
    return firstOccurance(arr,n,i+1,key);
}
// a bit hard to understand
int lastOccurance(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArr = lastOccurance(arr,n,i+1,key);

    if(restArr != -1){
        return restArr;
    }
    if( arr[i] == key){
        return i;
    }
    return -1;
}

//QUES: reverse a string usig recursion
string reversedString(string str){
    if(str.length() == 0){
        return "";
    }
    return reversedString(str.substr(1)) + str[0];
}
//QUES replace 3.14 in place of pi in a string
string replaceWith(string str){

    if(str.length() == 0 ){
        return "";
    }

    if(str[0] == 'p' && str[1]== 'i'){
        return "3.14"+replaceWith(str.substr(2)) ;
    }
    else{
        return str[0] + replaceWith(str.substr(1));
    }
}

//QUES: tower of hanoi


int main(){
    int arr[5]={1,2,3,4,2};
    // cout<<lastOccurance(arr,5,0,2)<<endl;
    cout<<replaceWith("")<<endl;
}