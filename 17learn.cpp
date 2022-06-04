#include <iostream>
using namespace std;
// print hollow rectangle
void printRect(int col, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1)
            {
                cout << "* ";
            }
            else if (j == 0 || j == col - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// invertd half pyramid
void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void pyramidOfNumbers(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << count;
            count++;
        }
        cout << endl;
    }
}
void butterflyPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j > i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j > i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}

// easy way to solve 
// 1. divide in colms and rows 
// 2. calculate the no. of spaces required


int main()
{

    // printRect(10,10);
    // pyramid(10);
    // pyramidOfNumbers(9);
    butterflyPattern(10);
}