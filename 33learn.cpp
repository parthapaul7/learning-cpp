#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node* prev;
    node(int value=0){
        data=value;
        next=NULL;
        prev=NULL;
    } 
};

void insertAtHead(node* &head,int data){
    node* n = new node(data);
    if(head==NULL){
        head = n;
        return;
    }
    head=n;
    n->next = head;
    n->prev = NULL;
}
void insertAtTail(node* &head,int data){
    if(head == NULL){
        insertAtHead(head,data);
        return;
    }
    node * n= new node(data);
    node * temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }

    temp->next=n;
    n->prev= temp;

    return;
}
void printLinkedList(node* head){

    node * temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" - "; 
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void printReverse(node* head){
    node * temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    };
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->prev;
    };

    cout<<"NULL"<<endl;

}

int main(){
    node* head= new node();
    head=NULL;
    insertAtTail(head,1);   
    insertAtTail(head,6);   
    insertAtTail(head,7);   
    insertAtTail(head,8);   
    insertAtTail(head,9);  

    printLinkedList(head);
 
}