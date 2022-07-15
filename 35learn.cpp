#include<iostream>
#include<stack>
using namespace std;

//QUES reverse a string with stack

string reverseString(string s){
    stack<string> str;
    string word="";
    for(int i=0;i<s.size();i++){

        if(s[i] ==' ' || i==s.size()-1){
            str.push(word);
            word="";
            i++;
        }
        word+=s[i];
    }
    word = "";
    while(!str.empty()){
       word+=str.top(); 
       word+=" ";
       str.pop();
    }
    return word;
}
//QUES reverse a stack without making another stack 
void insetAtBottom(stack<int> &stk,int temp){
    if(stk.empty()){
        stk.push(temp);
        return;
    };
    int temp2= stk.top();
    stk.pop();
    insetAtBottom(stk,temp);
    stk.push(temp2);
    return;
}
void reverseStack(stack<int> &stk){
    if(stk.empty()){
        return;
    }
    int temp = stk.top();
    stk.pop();
    reverseStack(stk);
    insetAtBottom(stk,temp);
    return;
    
}
int main(){
    // string str = "hey how are you doning?";
    // cout<<reverseString(str)<<endl;;
    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    reverseStack(stk);
    cout<<stk.top()<<endl;
}