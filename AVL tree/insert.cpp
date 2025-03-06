#include <iostream>
using namespace std;

class node {
public:
    int data;
    int height;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        height = 1;
        left = right = NULL;
    }
};

int getHeight(node* root) {
    if (root == NULL)
        return 0;
    else
        return root->height;
}

int getBalance(node* root) {
    if (root == NULL)
        return 0;
    return getHeight(root->left) - getHeight(root->right);
}

node* rightRotation(node* root) {
    node* child = root->left;
    node* childRight = child->right;

    child->right = root;
    root->left = childRight;

    // Update height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
    return child;
}

node* leftRotation(node* root) {
    node* child = root->right;
    node* childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    // Update height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
    return child;
}

node* insert(node* root, int key) {
    if (root == NULL)
        return new node(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    else
        return root;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int balance = getBalance(root);

    // Left Left Case
    if (balance > 1 && key < root->left->data)
        return rightRotation(root);

    // Right Right Case
    if (balance < -1 && key > root->right->data)
        return leftRotation(root);

    // Left Right Case
    if (balance > 1 && key > root->left->data) {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // Right Left Case
    if (balance < -1 && key < root->right->data) {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    return root;
}

void preorder(node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 50);
    root = insert(root, 14);
    root = insert(root, 25);
    root = insert(root, 54);
    root = insert(root, 22);
    root = insert(root, 47);
    
    cout << "Preorder traversal: ";
    preorder(root);
    cout<<endl;
    cout<<getHeight(root);
    cout<<endl;
    cout<<getBalance(root);
     cout<<endl;
     leftRotation(root);
     preorder(root);
    
    return 0;
}
