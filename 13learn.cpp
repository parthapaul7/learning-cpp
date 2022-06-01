#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    void setComplex(double r, double i)
    {
        real = r;
        imag = i;
    }
    void getComplex()
    {
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << imag << endl;
        cout << "the no. is " << real << " + " << imag << "i" << endl;
    }
    // initilize the constructor with default values
    Complex(int, int);
};

// Complex :: Complex(){  /// this is a default consturctor as it take no parameter
//     real = 0;
//     imag = 0;
// }

Complex ::Complex(int a, int b)
{ /// this is a parameterized constructor
    real = a;
    imag = b;
};

class Point
{
private:
    int x;
    int y;

public:
    Point(int,int);
    void setPoint(int a, int b)
    {
        x = a;
        y = b;
    }
    void getPoint()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};


int main()
{
    int a = 3.94;
    Complex c(5, 7);
    c.getComplex();

    cout << "this should work now " << a << endl;
}