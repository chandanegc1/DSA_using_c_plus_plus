#include<iostream>
using namespace std;
#define n 100

class stack{
    public:
    int top;
    int* arr;

    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int val){
        if(top == n-1){
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top == -1){
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            return -1;
        }
        return arr[top];
    }

    int empty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }
};

int main(){
    stack st;
    st.push(1);
    cout << st.Top() << endl;
    return 0;
}
