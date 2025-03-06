#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int priority;
    Node *link;

    Node(int data, int priority){
        this->data = data;
        this->priority = priority;
        this->link = NULL;
    }
};

class PQueue{
    Node *START;

    public:
    PQueue(){
        START = NULL;
    }

    void push(int data, int priority){
        Node *newNode;
        newNode = new Node(data, priority);

        if(START == NULL){
            START = newNode;
            return;
        }

        if(START->priority < priority){
            newNode->link = START;
            START = newNode;
        }

        else{
            Node *temp = START;
            while(temp->link != NULL && priority < temp->link->priority){
                temp = temp->link;
            }

            newNode->link = temp->link;
            temp->link = newNode;
        }
    }

    void print()
    {
        Node *temp1 = START;
        if (START == NULL)
        {
            cout << "List Empty" << endl;
            return;
        }
        while (temp1 != NULL)
        {
            cout <<"("<<temp1->data <<", "<<temp1->priority<<") ";
            temp1 = temp1->link;
        }
    }
};

int main(){
    PQueue queue;

    queue.push(10, 5);
    queue.push(40, 4);
    queue.push(20, 6);
    queue.push(90, 8);
    queue.push(30, 2);
    queue.push(50, 7);

    cout<<"Priority Queue is: ";
    queue.print();
    return 0;
}