#include <iostream>
using namespace std;
//TOPIC: seive of erotosthernis
// QUES: find all prime numbers upto a number  
void printPrimes(int n){

    int arr[n+1]={0};
    for(int i=2;i<=n;i++){
        if(arr[i] == 0){
        for(int j=i*i;j<=n;j+=i){
                arr[j] = 1;
        }
        }
    }
    /// unmarked means prime so no need to mark 2 ,3 etc 
    for(int i=2;i<=n;i++){
        if(arr[i]== 0){
        cout<<i<<" "<<i+2<<" ";
        }
    }
}

//QUES: find the prime factors of a all numbers 
//BUG
void primeFactor(int n){

}

int main(){

        int nos;
        cin>>nos;
        printPrimes(nos);

}