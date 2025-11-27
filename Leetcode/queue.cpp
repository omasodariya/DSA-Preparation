#include <bits/stdc++.h> 
using namespace std;
class Queue {
public:
    int qfront;
    int temp;
    int *arr;
    int size;
    Queue() {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        temp = 0;
    }

    bool isEmpty() {
        if(qfront == temp){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        if(temp < size){
            arr[temp] = data;
            temp++;
        }else{
            cout<<"Queue is Full "<<endl;
        }
    }
   int dequeue() {
        if(qfront == temp){
            return -1;
        }else{
            arr[qfront] = -1;
            qfront++;
            if(qfront == temp){
                qfront = 0;
                temp = 0;
            }
        }
    }

    int front() {
       if(qfront == temp){
           return -1;
       }else{
           return arr[qfront];
       }
    }
};

int main(){
    Queue q;
    q.enqueue(20);
    cout<<q.front()<<endl;
}