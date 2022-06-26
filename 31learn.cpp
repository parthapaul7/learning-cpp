#include <iostream>
#include <string>
using namespace std;
//TOPIC oops upto polymorphism 

class employee{
    private:
        string name;
        int salary;
    public: 
        //? default constructior
        employee(){
            name="name";
            salary=8000;
        }
        //? paramitarised constructor
        employee(string str,int num){
            name=str;
            salary=num;
        }
        //? copy construnctor
        employee( employee &a){
            name = a.name;
            salary = a.salary;
        }

        void setAll(string str,int num){
            name=str;
            salary=num;
        }
        void printAll(){
            cout<<name<<endl<<salary<<endl;
        }
        // void inherited(){
        //     cout<<"inherited"<<endl;
        // }
};


//? single inheritance 
// private part can not be inherited directy but can 
// can be inherited through public attributes 

class user :public employee {
    int userid;
    public:
       void setUserId(int id){
        userid=id;
       }
       void printUser(){
        cout<<"user id"<<userid<<endl;
       }
};

class C{
    public:
        int c;
};

//?  multilevel inheritence andd multiple inheritence
// private keyword means public props of the class is imported 
// as a private property , private property can not be inherited

class company : public user,private C{

    public:
        void setC(int num){
            c=num;
        }
        void getC(){
            cout<<c<<endl;
        }
};

//TOPIC polymorphism

//? function overloading
// same name function but excute different on the basis of
// no. of arguments 

void func(){
    cout<<"0 arguments "<<endl;
}
void func(int a){
    cout<<"1 arguments "<<endl;
}
void func(int a,float b){
    cout<<"2 arguments 1 int and 1 float "<<endl;
}

//? operator overloading

class Complex{
    private:
        int real;
        int img;
    public:
     Complex(int r=0,int i=0){
        real=r;
        img=i;
    }

    Complex operator +(Complex const &a){
        Complex res;
        res.real =real + a.real;
        res.img =img +a.img;
        return res;
    } 
    void printComplex(){
        cout<<real<<" + i"<<img<<endl;
    }

};

int main(){
    
    employee e1("jina valantina", 2000000);
    company e2;

    e2.setC(8);
    // e2.getC();

    Complex a(1,2);
    Complex b(3,4);

    Complex c = a + b;
    c.printComplex();

}