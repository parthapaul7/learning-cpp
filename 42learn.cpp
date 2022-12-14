#include <iostream>
#include <vector>
using namespace std;

//QUES: build binary tree with inorder and post order

class node{
    public:
        node* left;
        node* right;
        int data;

    node(int value=0){
        left =NULL;
        right = NULL;
        data = value;
    }
};

int search(vector<int> indorder,int start, int curr, int end){

    for(int i=start;i<=end;i++){
        if(indorder[i] == curr){
            return i;
        }
    }
    return -1;
}

node* buildNode(vector<int> preorder, vector<int> inorder,int start, int end){

    if(start > end){
        return NULL;
    }
    static int idx =0;

    int curr = preorder[idx];
    idx++;
    node* root = new node(curr);

    if(start == end){
    cout<<root->data<<endl;
        return root;
    }
    int pos = search(inorder, start,curr,end);

    root->left = buildNode(preorder,inorder,start, pos -1);   
    root->right = buildNode(preorder,inorder,pos+1,end);
}

int main(){
 
    vector<int> preorder = {1,2,4,3,5};
    vector<int> inorder = {4,2,1,5,2};
    
    node* root =  buildNode(preorder,inorder,0,4);
    
}