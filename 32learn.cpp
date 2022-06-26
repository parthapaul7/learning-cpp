#include <iostream>
using namespace std;

//TOPIC Linked list 

class node{
    public:
       int data; 
       node* next;
    node(int val=0){
        data = val;
        next= NULL;
    }
};

void addToTail(node* &head,int val){
    node* n = new node(val);
// by defalut this node hass next element as null from the consturtor

    if(head == NULL){
        head = n;
        return;
    }
    //! warning -> dont use stact memory here only use it for temp variable
    //! stack gets deleted after function return so no data will remain
    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

    // cout<<head-><<endl; 
    // n.data = val;
    // n.next = NULL;
}

void printLinkedList(node* head){

    node * temp = head;
    while(temp!= NULL){
        cout<<temp->data<<endl; 
        temp = temp->next;
    }
}

int main(){
    node* head=new node(); 
    head=NULL;

    // hand made linked list //
    // node a(5);
    // node b(6);

    // a.next = &b;
    // b.next = NULL;

    ////////////////////////////
    addToTail(head,6);   
    addToTail(head,7);   
    addToTail(head,8);   
    addToTail(head,9);   
    printLinkedList(head);
}