#include <iostream>
using namespace std;
// Node structure
struct node {
    int data;
    node* Lchild;
    node* Rchild;
    // Constructor to initialize a new node
    node(int value) {
        data = value;
        Lchild = Rchild = NULL;
    }
};
// Function to insert a new node with given data in a BST
node* binsert(node* root, int data) {
    node* newnode = new node(data);
    if (root == NULL) return newnode;

    node* parent = NULL;
    node* curr = root;

    while (curr != NULL) {
        parent = curr;
        if (data < curr->data) {
            curr = curr->Lchild;
        } else if (data > curr->data) {
            curr = curr->Rchild;
        } else {
            return root;
        }  }

    if (data < parent->data) {
        parent->Lchild = newnode;
    } else {
        parent->Rchild = newnode;
    }

    return root;
}

  
// In-order traversal to print the BST
void inorder(node* root) {
    if (root != NULL) {
        inorder(root->Lchild);
        cout << root->data << " ";
        inorder(root->Rchild);
    }
}
int main() {
    node* root = NULL;
    root = binsert(root, 50);
    binsert(root, 30);
    binsert(root, 20);
    binsert(root, 40);
    binsert(root, 70);
    binsert(root, 60);
    binsert(root, 80);

    inorder(root); // Output: 20 30 40 50 60 70 80
    return 0;
}
