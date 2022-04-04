#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num,i;

    cout<<"give me a number";
    cin>>num;

    for( i=2;i<=sqrt(num);i++){
        if(num%i){
            continue;
        }
        else{
            cout<<"its not a prime";
            break;
            return 0;
        } 

       
    }
     cout<<"its a prime";
        return 0;

    bool isPrime= true;

}
