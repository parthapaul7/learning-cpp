#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string isPythgorianTriplet(int a, int b, int c){
    if(a*a+b*b==c*c) return"yes it is" ;
    return"no it is not ";
};

int binaryToDecimal(int n){
    int ans = 0;
    for(int i=0;n>0;i++){
        int temp = n%10;
        n= n/10;
        ans =ans+ temp*pow(2,i); 
        // cout <<ans<<n<<exp<<endl;
    }
    return ans;
}

int octalToDeciaml(int n){
    int ans=0;
    for(int i=0;n>0;i++){
        int temp = n%10;
        n= n/10;
        ans =ans+ temp*pow(8,i); 
        // cout <<ans<<n<<exp<<endl;
    }
    return ans;
}

int hexaToDecimal(string n){

}

int main(){
    // int s1,s2,s3;
    // cin>>s1>>s2>>s3;
    // cout<<isPythgorianTriplet(s1,s2,s3)<<endl;
    int bin;
    cin >> bin;
    // cout << binaryToDecimal(bin)<<endl;
    cout<< octalToDeciaml(bin)<<endl;
}