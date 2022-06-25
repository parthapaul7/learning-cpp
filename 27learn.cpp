#include <iostream>
using namespace std;
//TOPIC backtraking (rat in a maze problem )

bool isSafe(int** arr,int n, int x, int y ){
    if(arr[x][y] != 0 && x<n && y<n){
        return true;
    }
    return false;
}

bool ratInMaze(int** arr,int n, int x, int y, int** solnArr){
    if(x==n-1, y==n-1){
        solnArr[x][y] = 1;
        return true;
    }
    if(isSafe(arr,n,x,y)){
        solnArr[x][y] = 1;
        if(ratInMaze(arr,n,x+1,y,solnArr)){
            return true;
        }
        if(ratInMaze(arr,n,x,y+1,solnArr)){
            return true;
        }

        solnArr[x][y] = 0;//backtraking 
        return false;
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

    int**solnArr = new int*[n];

    for(int i=0;i<n;i++){
        solnArr[i] = new int[n];
        for(int j=0;j<n;j++){
            solnArr[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    if(ratInMaze(arr,n,0,0,solnArr)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solnArr[i][j]<<" ";
        }
        cout<<endl;
        }
    }
}