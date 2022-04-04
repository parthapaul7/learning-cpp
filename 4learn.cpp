#include<iostream>
using namespace std;

typedef struct user  /// typedef means struct user = us
{
    /* data */
    int id  ;
    char name ='f';
    int salary =150;
    
} us;

union user2 {   /// struct but can only use one of the items as memory is shared
   int id;
   char name;
   int salary;
};

int main(){
    
    us parth;  // or struct user parth
    struct user rohan;
    
    parth.salary= 1;
    parth.name='p';
    cout <<rohan.id<<endl; /////// garbage data
    
    enum Meal{breakfast,lunch,dinner}; /// allocates 0,1,2 ..... to all the vars
    cout<<lunch;
    
}