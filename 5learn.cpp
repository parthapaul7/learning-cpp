#include <iostream>
using namespace std;

/////// function prototypes ////////////
void greet();
void swapPointer(int*,int*);  ////// dont forgot to prototype your function
void swapReferenceVar(int&,int&);

int main()
{
    greet();
    
    int x=5,y=3;
    // swap(x,y);  /// there is already a prebuild swap function
    swapPointer(&x,&y);
    swapReferenceVar(x,y);

    cout<<"x is "<<x<<" y is "<<y;
}
/////// actual funtions //////////
void greet()
{
    cout << "namaste" << endl;
    
};

//// swapin two variables with poinet
//// call by reference ///////
void swapPointer(int* a , int* b){
   int temp = *a; 
   *a= *b;
   *b = temp;
}
//// swap with cpp reference variable /////

void swapReferenceVar(int &a,int &b){
    int temp = a; 
   a= b;
   b = temp;
}