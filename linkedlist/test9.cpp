#include <iostream>
using namespace std;

// Node structure for the BST
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node with given data in a BST
Node* insert(Node* root, int data) {
    if (root == nullptr) {
        // If the tree is empty, create a new node and return it
        return new Node(data);
    }
    
    if (data < root->data) {
        // If the data is less than the root, insert it into the left subtree
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        // If the data is greater than the root, insert it into the right subtree
        root->right = insert(root->right, data);
    }
    // Return the unchanged root pointer
    return root;
}

// In-order traversal to print the BST
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL; // Initialize the root of the BST as null

    int elements[] = {5, 8, 10, 3, 1, 6, 9, 7, 2, 0, 4};
    int n = sizeof(elements)/sizeof(elements[0]);

    for (int i = 0; i < n; ++i) {
        root = insert(root, elements[i]);
    }

    cout << "In-order traversal of the BST: ";
    inorder(root); // Output the in-order traversal of the BST
    cout << endl;

    return 0;
}
