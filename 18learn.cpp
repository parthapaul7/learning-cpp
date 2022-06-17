#include <iostream>
#include <math.h>
using namespace std;

unsigned long long int decimalToBin(int n){
    if(n <= 0 ){
        return 0;
    }
    else{
        return n%2 + decimalToBin(n/2)*10;
    }
}

int reverseNumber(int n){
    int reversed = 0;
   for (int i=0;n>0;i++){
       int temp = n%10;
        reversed = reversed*10 + temp;
        n = n/10;
   }

   return reversed;
}

// find the reverse of decimal number with help of recursion
int reverseNumberRecursion(int n){
    if(n <= 0){
        return 0;
    }
    else{
        return (n%10) * pow(10,(int)log10(n)) + reverseNumberRecursion(n/10);
    }
}

/// find all armstrong number from 1 to n 
void armstongNumbers(int n){

    for (int i=1;i<=n;i++){
        int temp = i;
        int num=0;
        while(temp>0){
           num = num + pow(temp%10 , 5); 
           temp = temp/10;
        }
        if (i == num ){ 
            cout<<i<<endl;
        }
    }

}
int main(){

    // unsigned long long int bin=decimalToBin(999999);
    // int result = reverseNumber(99878);
 
    // cout<<reverseNumberRecursion(12345)<<endl;

    armstongNumbers(1000000);
}