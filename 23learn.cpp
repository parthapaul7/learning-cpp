#include <iostream>
#include <vector>
using namespace std;

// TOPIC: Normal Sorting with vector

//FIXME:bublle sor with vecotr
// the largest element goes to the right place;
vector<int> bubbleSort(vector<int> arr)
{
    for (int j = 0; j < arr.size(); j++)
    {
        for (int i = 0; i < arr.size() - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    return arr;
}

//FIXME: insertion sort 
// insert the element in its correct postion
// go down one by one and swap elemets
vector<int> insertionSort(vector<int> arr)
{
    for (int i=1; i<arr.size(); i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;

    }

    return arr;
}
int main()
{

    vector<int> arr;
    int arr2[6];
    int input;

    while (cin >> input)
    {
        arr.push_back(input);
    }

    vector<int> sorted = insertionSort(arr);

    for (int i = 0; i < sorted.size(); i++)
    {
        cout << sorted[i] << " ";
    }
}