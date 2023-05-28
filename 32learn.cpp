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

void AddToHead(node* &head,int val){
    node * newHead = new node(val);
     if(head == NULL){
        head = newHead;
        return;
     }
    node * temp = head;

    head = newHead;
    newHead->next = temp;
}

void printLinkedList(node* head){

    node * temp = head;
    while(head!= NULL){
        cout<<head->data<<" - "; 
        head= head->next;
    }
    cout<<"NULL"<<endl;
}

int searchInList(node * head, int key){
    int count=0;
    node * temp = head;
    while(temp!= NULL){
        if(temp->data == key){
            return count;
        }
        temp = temp->next;
        count++;
    }

    return -1;
}

int length(node* head){
    int count=0;
    node * temp = head;
    while(temp!= NULL){
        temp = temp->next;
        count++;
    }               
    return count;
}

bool deleteNode(node* &head,int key){
    node* temp= head;
    if(head->data == key){
        head = head->next;
        delete temp;
        return true;
    }
    while(temp->next->data !=key){
        temp = temp->next;
        if(temp->next == NULL){
            return false;
        }
    }
    node * toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
    return true;
}

void reverseList(node* &head){
    node* previous=NULL;
    node* current=head;
    node* nextptr;

    while(current!= NULL){
        nextptr = current->next;

        current->next = previous; // main step

        previous = current;
        current= nextptr;
    }

    head = previous;
}

void reverse(node* &head , node* current , node* prev){
    // base case 
    if(current == NULL){
        head = prev; 
        return;
    }

    // cout<<head->data<<endl;
    // prev = head;
    reverse(head, current->next, current);
    current->next = prev;
    return;

}

//QUES reverse k nodes in a linked list

void reverseKnodes(node * &head,int k){
    int count=0;
    node* temp = head;
    while(count<k){
        count++;
        temp= temp->next;
    }

    node* previous=temp;
    node* current=head;
    node* nextptr;
    count=0;
    while(current != NULL && count<k){
        nextptr = current->next;

        current->next = previous; // main step

        previous = current;
        current= nextptr;
        count++;
    }
    head = previous;
}

//QUES hare and tortoise algo to detect cycle
bool detectCycle(node* head){

}


int findSize(node* head){
        int count = 0;

        while(head != nullptr){
            head = head->next;
            count++;
        }
        return count;
}

    void alternateReverse(node* head , node* nextStep){
        
        if(head == nullptr || head->next == nullptr){
            return; 
        }

        node* temp = head;
        // cout<<head->data<<endl;
        if(head->next->next == nullptr){
            head->next = head->next->next;
        }else{
            head->next = head->next->next->next;
        }
        temp->next = head;
        alternateReverse(head, nextStep->next->next);


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
    addToTail(head,1);   
    addToTail(head,6);   
    addToTail(head,7);   
    addToTail(head,8);   
    // addToTail(head,9);   
    reverseList(head);
    reverse(head,head,NULL);
    // cout<<deleteNode(head,0)<<" delete"<<endl;
    alternateReverse(head, head->next->next);
    cout<<head<<endl;
    // printLinkedList(head);
    // cout<<findSize(head)<<endl;
    // cout<<length(head)<<endl;;
    ////////////////////////////


}