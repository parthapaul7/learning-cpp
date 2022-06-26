#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "hello world" << endl;

    // int num1= 2;
    // int num2= num1++;
    // long double num = 2.66f;
    // cout<<sizeof(num)<<endl << num;

    float a = 2.77;
    /////////////////////// reference variable ///////////////////
    float &b = a;
    b = 5.5;
    cout << b << endl;

    ///////////////type casting ---> convert one to other data type /////////////////////
    cout << int(a) << endl;

    ////////////// conatants ////////////////
    const int num = int(3);

    ////////////////  manupulatiors ////////////
    cout << setw(4) << 4 << endl;
    cout << setw(4) << 4444 << endl; // making numbers right justified

    //////////// control structures //////////////////
    //////////// loop structure ///////////o

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
}
