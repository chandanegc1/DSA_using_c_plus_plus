#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Note:Order depent on root
//Inorder Traversal(left ,root , right)
void inOreder(Node* root){
    if(root == NULL) return;
    inOreder(root->left);
    cout<<root->data<<" ";
    inOreder(root->right);
}

//Preorder Traversal(rooot , left ,right)

void preOreder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOreder(root->left);
    preOreder(root->right);
}

//postOreder(left , right , root)
void postOreder(Node* root){
    if(root == NULL) return;
    postOreder(root->left);
    postOreder(root->right);
    cout<<root->data<<" ";  
}

int main(){
    Node* root = new Node(1);
    root->right = new Node(2);
    root->left = new Node(3);
    postOreder(root);
    return 0;
}
