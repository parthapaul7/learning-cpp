#include <iostream>
#include<vector>

using namespace std;

vector<int> merge(int a[],int b[],int x,int y){
    int l=0,r=0;
    vector<int> v;


    while(l<x && r<y){
        if(a[l]<b[r]){
            v.push_back(a[l]);
            l++;
        }else{
            v.push_back(b[r]);
            r++;
        }
    } 

    while(l<x){
        v.push_back(a[l]);
        l++;
    }

    while(r<y){
        v.push_back(b[r]);
        r++;
    }

    return v;
}

int main(){
    int x,y;
    cin>>x>>y;
    int a[x],b[y];
    vector<int> v;


    for(int i=0;i<x;i++){
        cin>>a[i];
    }

    for(int i=0;i<y;i++){
        cin>>b[i];
    } 

    v = merge(a,b,x,y);
    for(int i=0;i<x+y;i++){
       cout<<v[i]<<" ";
    }
 
}



