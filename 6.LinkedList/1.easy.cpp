#include<iostream>
using namespace std;


class Node{
  
   public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertData(Node* &head , int data){
    Node *n = new Node(data);
    if(head==NULL){
        head = n;
        return;
    }

    Node* temp = NULL;
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}


int main(){
    Node* head = NULL;
    insertData(head ,1);
    insertData(head ,1);
    insertData(head ,1);
    insertData(head ,1);
    display(head); 
    return 0;
}