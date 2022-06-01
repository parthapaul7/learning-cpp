#include <iostream>
using namespace std;
class Number{
private:
    int num;
public:
    Number(int a=0){
        num = a;
    };
    /// copy constructor 
    // copy constructor is present by default so it will work without
    Number(Number &obj){
        num = obj.num;
    };

    void displayNumber(){
        cout << "Number is " << num << endl;
    }

};

int main(){
    Number num1 , num2(34.5);

    num1.displayNumber();
    num2.displayNumber();

    Number num3(num2);
    num3.displayNumber();

}