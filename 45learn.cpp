#include <iostream>
#include<math.h>
#define lli long long int
using namespace std;

// find the no of factors of a number with OOPs
class Factor{
    public:
    int N;
    int count=0;

    Factor(int num){
        N=num;
    }

    int findFactor(){
        for(int i=1;i<=sqrt(N);i++){
            if(N%i==0){
                if(N/i==i){
                    count++;
                }
                else{
                    count+=2;
                }
            }
        }
        return count;
    }
}; 

class BigLn{
    public:
    int N;
    int count=0;
    BigLn(int num){
        N=num;
    }
    lli bigO(){
        for(int i=1;i<=N;i++){
            for(int j=0;j<=N;j+=i){
                count++;
            }
        }
        return count;
    }
};

int main(){
    int N;
    cin>>N;
    // find no of factors of N

    int num = Factor(N).findFactor();
    lli num2 = BigLn(N).bigO();
    lli temp = N*log2(N);

    cout<<num<<endl;
    cout<<num2<<" "<<temp<<endl;
    
 
}