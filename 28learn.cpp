#include <iostream>
using namespace std;

//TOPIC N queen problem
// ! hint use backtracking and recursion  
//! fuck its so hard dude 

bool isSafe(int** arr,int n,int x,int y){
    for(int row=x;row>=0;row--){
        if(arr[row][y]==1){
            return false;
        }
    }

    int row =x;
    int col =y;

    while (row>=0 && col >=0){
        if(arr[row][col]==1) {
            return false;
        }
        row--;
        col--;
    }
    row =x;
    col =y;

    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }

        col++;
        row--;
    }
    
    return true;
}

bool isQueen(int** arr,int n,int x,int y){

    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr,n,x,col)){
            arr[x][col] = 1;
            if(isQueen(arr,n,x+1,y)){
                return true;
            }
            arr[x][col] = 0;  //? backtraking
            // return false;
        }
    }
    return false;
}



int main(){
    int n;
    cin>>n;

    int** arr = new int*[n];

    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    if(isQueen(arr,n,0,0)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"no solution"<<endl;
    }
}