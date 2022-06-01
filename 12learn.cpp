#include <iostream>
#include <string>
using namespace std;
// make a array of objects
class Employee
{
    int id;
    string name;
    int age;

public:
    /// dont make the argument and variable names same caursed problem somethimes
    void setEmployee(int ID, string Name, int Age)
    {
        id = ID;
        name = Name;
        age = Age;
    }
    void getEmpyee()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    friend Employee changeName(Employee);
    /// friend funtin of anthor class 

    friend void Complex :: changeSalary(int); 
    // friend funtion this fuction can access private data
};

// this fuction return a object of that class(Emplyee)
Employee changeName(Employee e1)
{
    Employee e2;
    e2.setEmployee(e1.id, "rohan-das", e1.age);
    return e2;
};

class Complex
{
    int salary;

public:
    void changeSalary(int salary)
    {
    }
};

int main()
{
    Employee amazon[4];

    // itrate through the array of objects
    for (int i = 0; i < 4; i++)
    {
        amazon[i].setEmployee(i, "Amazon", i + 10);
    };

    amazon[0].getEmpyee();
    changeName(amazon[0]).getEmpyee();
}