#include <iostream>
#include<stack>
#include<math.h>
#include<string>

using namespace std;

//TOPIC postfix and preficx notation opertion 
//? usese lifo (last in first out) poperty which is available in stack

int prefixOperation(string s){
    stack<int> st;
    for(int i = s.length()-1;i>0;i--){

        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i] -'0'); /// -'0' is done to convet it into a number

        }
    }

}

int main(){
 
}