#include<bits/stdc++.h>
using namespace std;

int Solve (int N, vector <int> A) {
   // Write your code 
   // write code to print the no. closest to zero
    int min = INT_MAX;
    int min_index = 0;
    for(int i=0;i<N;i++){
        if(abs(A[i])<min){
            min = abs(A[i]);
            min_index = i;
        }

        if(abs(A[i])==min){
            if(A[i]>A[min_index]){
                min = abs(A[i]);
                min_index = i;
            }
        }
    }
    return A[min_index];
   
}

// impliment the solve function in a class


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector <int> A(N);
    for (int a_i = 0; a_i < N; ++a_i) {
        cin >> A[a_i];
    }
    int out = Solve(N, A);
    cout << out << "\n";
}