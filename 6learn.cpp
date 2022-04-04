#include<iostream>
using namespace std;
//////// inline funtion /////////// 
inline int product(int a=0,int b=0){  // default arguments
    static int c=0;       /// static variable intilization only once 
    c++;
    return a*b+c;          /// should not use staic varibale in inline function
}

int main(){

   cout<<product(4)<<endl;
   cout<<product(2,3)<<endl;

}
