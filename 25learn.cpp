#include <iostream>
using namespace std;
//TOPIC: indlusion exclusion principle 

//QUES: find GCD using eucleds algorith
int findGCD(int a ,int b){
    int r;

    while (b>0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<findGCD(a,b)<<endl;
}