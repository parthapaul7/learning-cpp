#include <iostream>
using namespace std;
int maxElement(int arr[], int n)
{

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int reacordBreakingDay(int arr[], int n)
{
    int noOfDays = 0;
    int currentMax = arr[0];

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > currentMax)
        {
            if (arr[i] > arr[i + 1])
            {
                noOfDays++;
            }
            currentMax = arr[i];
        }
    }

    // for the first day
    if (arr[0] > arr[1])
    {
        noOfDays++;
    }
    // for the last day
    if (arr[n - 1] >= currentMax)
    {
        noOfDays++;
    }
    return noOfDays;
}

int indexOfMinimunRepeat(int arr[], int n)
{
    int minIndex = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                minIndex = j + 1;
                break;
            }
        }
    }
    return minIndex;
}

int maxSubarraySum(int arr[],int n){
    int maxSum=0,currentSum=0;
    for(int i=0;i<n;i++){
        currentSum += arr[i];
        if(maxSum < currentSum){
            maxSum = currentSum;
        }
        if(currentSum < 0){
            currentSum=0;
            maxSum=0;
        }
    }
    return maxSum;
}

void indexesOfaSum(int arr[], int n, int s)
{
    int start = 0, end = 0;
    int sum = 0;

    for (start; start < n; start++)
    {
        for (end = start; end < n; end++)
        {
            sum += arr[end];
            if (sum == s)
            {
                cout << start +1 << " " << end +1 << endl;
                return;
            }
        }

        sum = 0;
    }

    cout<<-1<<" "<<-1<<endl;
}

int main()
{
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   cout<<maxSubarraySum(arr,n);
    return 0;
}