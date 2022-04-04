#include<iostream>
#include<string>
using namespace std;

class Employee{
    string name;
    // int count = 0;
    static int count;    // static variables start form zero 

    public:
        void setData(){
            cout<<"type your name ";
            cin>>name;
            count++;

        };
        void getData(){
            cout<<"enrollment no. is "<<count<<" your name is "<<name<<endl;
        };
};
// problem is you cant increase the count for each object created; 
// to solve this we define a static variable inside the employee class;

int Employee::count=20310000;  // static variables defined outside the class

int main(){
    Employee parth;
    Employee harry;

    parth.setData();
    parth.getData();

    harry.setData();
    harry.getData();
}