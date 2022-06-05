#include <iostream>
using namespace std;

unsigned long long int decimalToBin(int n){
    if(n <= 0 ){
        return 0;
    }
    else{
        return n%2 + decimalToBin(n/2)*10;
    }
}
int main(){

    unsigned long long int bin=decimalToBin(999999);
    cout<<bin<<endl;
 
}