#include <iostream>
using namespace std;
#define n 20

//TOPIC  Queue -- operations ->enqueue, dequeue , peek, empty

class queue{
    public:
        int* arr;
        int front;
        int back;
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;

        }
        void push(int x){
            if(back == n-1){
                cout<<"queue overflow"<<endl;
                return;
            }
            back++;
            arr[back] =x; 
            if(front == -1){
                front = 0;
            }
        }
        void pop(){
            if(front == -1){
                cout<<"no elem present"<<endl;
                return;
            }            
            if (front > back){
                cout<<"no elem present"<<endl;
                return;
            }
            front++;
        } 
        int peek(){
            if ( front == -1 || front >back){
                return -1;
            }
            return arr[front];
        }

        bool empty(){
            if( front == -1 || front > back){
                return 1;
            }
            return 0;
        }
};


int main(){
    queue q;
    q.push(10);
    q.push(78);
    q.push(79);
    q.pop();
    int a = q.peek();
    cout<<a<<endl;
}