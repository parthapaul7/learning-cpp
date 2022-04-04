#include <iostream>
#include <string>
using namespace std;

//////// classes ///////////////
class Employee
{
private: ////// private data can only be accessed by the public functions of the class
    int priv;

public:
    int pub;
    void setPriv(int a)
    {
        priv = a;
    }
    void showValues();
   
};

 void Employee :: showValues()
    {
        cout << "private is " << priv << " and public is " << pub << endl;
    }

class demo
{
    ///////////// bydefault everything is private //////////////
    string name = "Partha";

public:
    void setName(string str) { name = str; };
    void showName(){ cout << name<<endl;};
};

int main()
{
    Employee partha;
    // partha.priv = 11; /// priveate data cant be set
    partha.setPriv(10);
    partha.pub = 1;
    partha.showValues();

    demo huihui;
    huihui.setName("rohan das");
    huihui.showName();
}