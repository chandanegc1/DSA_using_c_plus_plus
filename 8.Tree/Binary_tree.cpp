#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// 1. Depth First Traversal (DFS Traversal)
//    1.1 Inorder Traversal (left, root, right)
void inOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// 1.2 Preorder Traversal (root, left, right)
void preOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// 1.3 Postorder Traversal (left, right, root)
void postOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// 2. Breadth First Traversal (BFS Traversal)
//    2.1 Level Order Traversal
vector<vector<int>> levelOrder(Node *root) {
    queue<Node *> q;
    q.push(root);
    vector<vector<int>> ans;

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            Node *temp = q.front();
            q.pop();

            level.push_back(temp->data);
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
        ans.push_back(level);
    }
    return ans;
}

int main() {
    Node *root = new Node(1);
    root->right = new Node(2);
    root->left = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    root->left = new Node(6);
    root->left->left = new Node(7);
    root->left->right = new Node(8);

    vector<vector<int>> levels = levelOrder(root);

    for (const vector<int>& level : levels) {
        for (int value : level) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
