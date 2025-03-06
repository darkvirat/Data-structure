#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
private:
    Node* head;

public:
    Stack() {
        head = NULL;
    }

    // Function to add an element to the stack
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Function to remove an element from the stack
    void pop() {
        if (head == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Function to return the top element of the stack
    int top() {
        if (head == NULL) {
            cout << "Stack is empty!" << endl;
            return -1; // Return a sentinel value
        }
        return head->data;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return head == NULL;
    }

    // Function to print all elements in the stack
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.print();

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "Stack elements after pop: ";
    s.print();

    return 0;
}
