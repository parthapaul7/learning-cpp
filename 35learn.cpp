#include <iostream>
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

int main(){
    string str = "hey how are you doning?";
    cout<<reverseString(str)<<endl;;
}