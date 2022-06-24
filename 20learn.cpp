#include <iostream>
using namespace std;

bool checkPalindorme(char arr[], int n){

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-i-1]){
            return false;
        }

    }

        return true;
}

void largestWordInSentence(char arr[],int n){
    int currLength=0,maxLength=0;
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == '\0'){
            maxLength = currLength;
            break;
        }
        else if(arr[i] == ' ' ){
            maxLength = currLength;
            currLength =0;
        }
        else{
            currLength++;
        }
    }

    cout<<maxLength<<endl;
    for(int j=n-maxLength-1;j<n-1;j++){
        cout<<arr[j];
    }
    cout<<endl;

}

int main(){
    // characters
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cin.getline(arr,n);
    cin.ignore();

   largestWordInSentence(arr,n);
 
}