#include <iostream>
using namespace std;

// TOPIC: Linked list implementation of queue
class node {
    public: 
        int data;
        node* next;
    
    node(int val=0){
        data = val;
        next = NULL;
    }
};

class queue{
    public: 
        node* front;
        node* back;
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int num){
        node* n= new node(num);
        if(front == NULL){
            front = n; 
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void deque(){
        if(front == NULL){
            cout<<"stack underflow"<<endl;
            return;
        }
        node* temp = front;
        if (front->next == NULL){
            front = NULL;
            back = NULL;
            delete temp;
            return;
        } 
        front = front->next;
        delete temp;
        return;
    }
    int peek(){
        if(front ==NULL){
            cout<<"no elements"<<endl;
            return -1;
        }
        return back->data;
    } 
    bool empty(){
        if( front == NULL && back == NULL){
            return 1;
        } 
        return 0;
    }

};



int main(){
     
     queue q;
     cout<<q.peek()<<endl;
     cout<<q.empty()<<endl;
     q.push(10);
     cout<<q.peek()<<endl;
     cout<<q.empty()<<endl;
     q.deque();
     cout<<q.peek()<<endl;
     cout<<q.empty()<<endl;
     q.push(30);
     q.deque();
     cout<<q.peek()<<endl;


}