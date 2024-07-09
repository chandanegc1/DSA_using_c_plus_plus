#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int data){
        this->data=data;
        pre=NULL;
        next=NULL;
    }
};

// 1# Traverse a Linked List and Display all elements
void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

// 2# Insert an element in Doubly Linkdelist
void insertion(Node* &head , int data){
    Node* cur = new Node(data);
    if(head==NULL){
        head=cur;
        return;
    }

    if(head->next==NULL){
        head->next=cur;
        cur->pre=head;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next= cur;
    cur->pre=temp;
}

// 3# Insert element at the nth position
void insertNthPossition(Node* head, int data , int key){
    
    Node* cur = new Node(data);
    if(head==NULL && key==1){
        head=cur;
        return;
    }

    if(head==NULL){
        return;
    }
    Node* temp =head;
    for(int i = 2 ; temp!=NULL;temp=temp->next){
        if(key==i){
            Node* nextLink = temp->next;
            temp->next=cur;
            cur->pre=temp;
            cur->next=nextLink;
            nextLink->pre = cur;
            break;
        }
        i++;
    }
}

// 4# Reverse Linked List
void reverse(Node* head){
    
}
// 7# Delete an element from Linkedlist
void deleteAnElement(Node* &head , int key){
    
}
int main(){
    Node* head=NULL;
    insertion(head ,1);
    insertion(head ,2);
    insertion(head ,3);
    insertion(head ,4);
    insertNthPossition(head ,81 ,4);
    display(head);
    return 0;
}