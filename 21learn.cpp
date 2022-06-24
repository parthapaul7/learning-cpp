#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int main(){

 //strings  
    string str;
    // dont use cin directly bacause it cant take spaces 
    getline(cin,str);
    string s1= "hell in heaven";
    string s2= "hell";
    int num = s1[1];
    bool compare = s1 == s2;
    // cout<<s1.erase(4,3)<<endl;
    // erase function for erasing a part

    // cout<<s1.find("h")<<endl;
    // finding the index of a char in a string
    sort(s1.begin(),s1.end());
    // sorting a string like this 
    str = "a b";
    
    cout<<' '-'A'+'a'<<endl;
 
}