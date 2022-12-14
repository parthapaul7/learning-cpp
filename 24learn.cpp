#include <iostream>
using namespace std;
// TOPIC: seive of erotosthernis
//  QUES: find all prime numbers upto a number
void printPrimes(int n)
{

    int arr[n + 1] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    /// unmarked means prime so no need to mark 2 ,3 etc
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " " << i + 2 << " ";
        }
    }
}

// QUES: prime numbers starting form a to b
void printLocalPrimes(int a, int b)
{
    int arr[b - a + 1] = {0};

    for (int i = 2; i * i <= b; i++)
    {
            int start = (a + (i - a % i));
            for (int j = start; j <= b; j += i)
            {
                arr[j-a] = 1;
            }
    }

    for (int i = 1; i < b - a + 1; i++)
    {
        if (arr[i] == 0)
        {
            cout << a+i << " ";
        }
    }
    return;
}

// QUES: find the prime factors of a all numbers
// BUG
void primeFactor(int n)
{
}

int main()
{

    int a, b;
    cin >> a >> b;
    // printPrimes(nos);
    printLocalPrimes(a, b);
}