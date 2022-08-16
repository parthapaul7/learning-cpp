#include <iostream>
using namespace std;

#define n 100 //? define some global constant 

//TOPIC stack

class stack{
    public:
        int* arr;
        int top;    
    stack(){
        arr = new int[n];
        top=-1;
    }
    void push(int x){
        if(top == n-1){
            cout<<"stack overflow"<<endl;
            return ;
        };
        top++;
        arr[top] = x;
        return ;
    }
    void pop(){
        if(top == -1){
            cout<<"empty stack"<<endl;
            return ;
        };
        top--;
        return;
    }
    int Top(){
        if(top == -1){
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        return false;
    }

};

int main(){
    stack a;
    a.push(55);
    a.push(44);
    a.pop();
    cout<<a.empty()<<endl;
    cout<<a.Top()<<endl;
}