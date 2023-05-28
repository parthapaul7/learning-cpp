#include <bits/stdc++.h>
using namespace std;

long long findFibonacci( int n ){

    long long prev1, prev2;

    prev1 = 1;
    prev2 = 1;

    for(int i=2;i<n;i++){
       prev1 = prev1 + prev2;
       prev2 = prev1 - prev2;
    }

    return prev1;
}


// implementing merge sort  

vector<int> sort(vector<int> v){
    auto left= v.begin(), right= v.end(); 
    int mid;
    if(v.size() % 2 == 0){
        mid = v.size()/2;
    }
    else{
        mid = (v.size()-1)/2;
    }

    auto midelem = (left +mid ); 

    merge(left ,midelem);
    merge(midelem+1,right);

}


int main(){

    cout<<findFibonacci(2)<<endl;
    cout<<findFibonacci(3)<<endl;
    cout<<findFibonacci(100)<<endl;
 
}