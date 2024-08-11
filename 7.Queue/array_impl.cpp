#include <bits/stdc++.h>
using namespace std;
#define size 10

class Queue {
   private:
    int arr[size];
    int front = 0;
    int rear = 0;
   public:
    void enqueue(int val){
        if (size == rear)
            cout << "Queue is full" << endl;
        else
            arr[rear] = val;
            rear++;
    }

    void dequeue(){
        if (front == rear)
            cout << "Queue is empty" << endl;
        else
            front++;
    }

    int peek(){
        if(front == rear)
            cout << "Queue is empty" << endl;
        else
            return arr[front];
    }

    bool isEmpty(){
        if(front == rear)
            return 1;
        else
            return 0;
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Queue: " << q.peek() << endl;
    q.dequeue();
    q.dequeue();
    cout << "Queue: " << q.peek() << endl;
    cout << "Is empty: " << q.isEmpty() << endl;
    return 0;
}