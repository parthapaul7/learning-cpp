#include <iostream>
using namespace std;
//TOPIC heap memory allocation


int main(){
    int* a = new int();

    // new keyword always outputs a pointer 
    *a = 5;
    cout<<*a<<endl;

    delete(a);  /// dont forget to fee up space after work done
    // making an array and allocating 

    int * arr = new int[2];

    arr[0] = 1;
    arr[1] =2;
    cout<<arr[0]<<arr[1]<<endl;

    delete(arr);
    // only deleteing leaves a dangling pointer 

    arr = NULL;
    // to remove this dangling pointer use make it NULL

    //?making and allocating a 2d array

    int** arr2 = new int*[2];

    arr2[0] = new int[2];
    arr2[1] = new int[2];

    arr2[0][0] =1;
    arr2[0][1] =2;
    arr2[1][0] =3;
    arr2[1][1] =4;

    cout<<arr2[1][1]<<endl;
    delete(arr2);
    arr2= NULL;


}