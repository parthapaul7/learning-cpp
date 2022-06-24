#include <iostream>
#include<vector>
using namespace std;
// bitwise operator


//QUES check if a no. is power of 2

bool checkforTwoPow(int num){
    return !(num & num-1);
}

//QUES: count no. of 1s in binray form 

int noOfOnes(int num){
    int count=0;
    while(num){
        num = num & num-1;
        count++;
    }
    return count;
}


//QUES:find one unique no. form an array 
// this problem very weirdly solving the problem because 
// 1 ^ 2 = 3  and 3 ^ 3 is 0 but again 1^2 gives 3 giving the right ans
int findUnique(vector<int> arr){
    int xorSum =0;
     for(int i=0;i<arr.size();i++){
        xorSum = xorSum ^ arr[i];
     }
    return xorSum;
}

///  << left shift operator
// eg   1 << 2 == 0100
int main(){

    int bit = 1 ^ 2;
    int manPulated = bit;
    // cout << manPulated << endl;
    // cout<<bit<<endl;

    vector<int> arr = {1,2,3,2,1};
    cout<<findUnique(arr)<<endl;
    //Sieve of Eratosthenes

}