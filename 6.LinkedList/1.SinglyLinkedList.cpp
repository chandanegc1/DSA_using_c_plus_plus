#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next=NULL;
    }
};

// 1# Traverse a Linked List and Display all elements
void display(Node* head){
    Node* cur = head;
    while(cur != NULL){
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

// 2# Insert element at the head of Linked List
void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// 3# Insert element at the tail of Linked List
void insertAtTail(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next = newNode;
}

// 4# Insert element at the nth position
void insertAtNthPosition(Node* &head, int pos, int data){
    if(pos == 1){
        insertAtHead(head, data);
        return;
    }
    Node* newNode = new Node(data);
    Node* cur = head;
    for(int i = 1; i < pos-1 && cur != NULL; i++){
        cur = cur->next;
    }
    if(cur == NULL){
        cout << "Position out of bounds" << endl;
        return;
    }
    newNode->next = cur->next;
    cur->next = newNode;
}

// 5# Reverse Linked List
void reverseElements(Node* &head){
    Node* prev = NULL;
    Node* cur = head;
    Node* next = NULL;
    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
} 

// 6# Search an element in Linkedlist
void SearchAnElement(Node* head , int key){
    Node* cur=head;
    int flag=0;
    while(cur!=NULL){
        if(cur->data==key){
            cout<<"Element found"<<endl;
            flag++;
            break;
        }
        cur=cur->next;
    }
    if(!flag) cout<<"Element not found"<<endl;
}

// 7# Delete an element from Linkedlist
// void deleteAnElement(Node* &head , int key){
//     Node* cur=head;
//     while(cur->data==key && cur->next!=NULL){
//         cur=cur->next;
//     }

// }
int main(){
    Node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    display(head);
    insertAtTail(head, 5);
    insertAtTail(head, 6); 
    display(head);
    insertAtNthPosition(head, 2, 16);
    display(head);
    reverseElements(head);
    display(head);
    SearchAnElement(head , 6);
    // deleteAnElement(head , 6);
    display(head);
    return 0;
}
