#include <iostream>
#include <algorithm>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    int height;

    Node(int key) {
        this->key = key;
        left = right = NULL;
        height = 1;
    }
};

class AVLTree {
public:
    Node* root;

    AVLTree() {
        root = NULL;
    }

    int getHeight(Node* node) {
        return node ? node->height : 0;
    }

    int getBalanceFactor(Node* node) {
        return node ? getHeight(node->left) - getHeight(node->right) : 0;
    }

    Node* getMinNode(Node* node) {
        Node* current = node;
        while (current->left != NULL)
            current = current->left;
        return current;
    }

    Node* search(Node* node, int key) {
        if (node == NULL || node->key == key)
            return node;
        if (key < node->key)
            return search(node->left, key);
        return search(node->right, key);
    }

    Node* insert(Node* node, int key) {
        if (node == NULL)
            return new Node(key);

        if (key < node->key)
            node->left = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);
        else
            return node;

        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        int balance = getBalanceFactor(node);

        if (balance > 1 && key < node->left->key)
            return rightRotate(node);

        if (balance < -1 && key > node->right->key)
            return leftRotate(node);

        if (balance > 1 && key > node->left->key) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        if (balance < -1 && key < node->right->key) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    Node* deleteNode(Node* node, int key) {
        if (!node)
            return node;

        if (key < node->key)
            node->left = deleteNode(node->left, key);
        else if (key > node->key)
            node->right = deleteNode(node->right, key);
        else {
            if (!node->left || !node->right) {
                Node* temp = node->left ? node->left : node->right;
                if (!temp)
                    return NULL;
                else
                    *node = *temp;
                delete temp;
            } else {
                Node* temp = getMinNode(node->right);
                node->key = temp->key;
                node->right = deleteNode(node->right, temp->key);
            }
        }

        if (!node)
            return node;

        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        int balance = getBalanceFactor(node);

        if (balance > 1 && getBalanceFactor(node->left) >= 0)
            return rightRotate(node);

        if (balance > 1 && getBalanceFactor(node->left) < 0) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        if (balance < -1 && getBalanceFactor(node->right) <= 0)
            return leftRotate(node);

        if (balance < -1 && getBalanceFactor(node->right) > 0) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    Node* leftRotate(Node* node) {
        Node* rightChild = node->right;
        Node* leftSubtreeOfRightChild = rightChild->left;

        rightChild->left = node;
        node->right = leftSubtreeOfRightChild;

        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        rightChild->height = 1 + max(getHeight(rightChild->left), getHeight(rightChild->right));

        return rightChild;
    }

    Node* rightRotate(Node* node) {
        Node* leftChild = node->left;
        Node* rightSubtreeOfLeftChild = leftChild->right;

        leftChild->right = node;
        node->left = rightSubtreeOfLeftChild;

        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        leftChild->height = 1 + max(getHeight(leftChild->left), getHeight(leftChild->right));

        return leftChild;
    }

    void inorderTraversal(Node* node) {
        if (node == NULL)
            return;

        inorderTraversal(node->left);
        cout << node->key << " ";
        inorderTraversal(node->right);
    }

    void printTree() {
        if (root == NULL) {
            cout << "AVL tree is empty!" << endl;
            return;
        }

        cout << "Inorder traversal:" << endl;
        inorderTraversal(root);
        cout << endl;
    }
};

void printSearchResult(Node* result) {
    cout << (result ? to_string(result->key) : "not found") << endl;
}

int main() {
    AVLTree avl;
    int keys[] = {50, 25, 75, 15, 35, 60, 120, 10, 68, 90, 125, 83, 100};

    for (int key : keys)
        avl.root = avl.insert(avl.root, key);

    avl.printTree();

    Node* result = avl.search(avl.root, 125);
    cout << "Search for 125: ";
    printSearchResult(result);

    result = avl.search(avl.root, 1);
    cout << "Search for 1: ";
    printSearchResult(result);

    avl.root = avl.deleteNode(avl.root, 120);
    cout << "After deleting 120:" << endl;
    avl.printTree();

    avl.root = avl.deleteNode(avl.root, 10);
    cout << "After deleting 10:" << endl;
    avl.printTree();

    return 0;
}
