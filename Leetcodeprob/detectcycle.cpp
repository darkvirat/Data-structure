#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    node(int v){
        this->data=v;
        this->next=NULL;
    
    }
};

class LinkedList{
    public:
    node*head;
    LinkedList(){
        head=NULL;
    }

void insert(int data){
    node*newnode=new node(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}

  void createCycle(int pos) {
        if (head == NULL) return;

        node* tail = head;
        node* cycleNode = NULL;
        int idx = 0;
        while (tail->next != NULL) {
            if (idx == pos) {
                cycleNode = tail;
            }
            tail = tail->next;
            idx++;
        }

        // To cover the case when pos points to the last node
        if (idx == pos) {
            cycleNode = tail;
        }

        if (cycleNode != NULL) {
            tail->next = cycleNode; // create the cycle
        }
    }

    void hascycle(){
        node*slow=head;
        node*fast=head;

        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cout<<"exist";
                return;
            }

        }
        cout<<" no cycle";

        

    }



};
int main(){
    LinkedList L;
    L.insert(5);
    L.insert(4);
    L.insert(3);
    L.insert(2);
    L.insert(1);

    L.createCycle(3);
     L.hascycle();

     
    
    return 0 ;
}














































// //  brute force aproach 
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// // Brute force: check current node with all previous nodes
// bool hasCycle(Node* head) {
//     Node* visited[1000]; // Array to store visited node pointers
//     int count = 0;

//     Node* current = head;
//     while (current != nullptr) {
//         // Check if current is already in visited
//         for (int i = 0; i < count; ++i) {
//             if (visited[i] == current) {
//                 return true; // Cycle detected
//             }
//         }

//         // Add current node to visited list
//         visited[count++] = current;

//         current = current->next;
//     }

//     return false; // No cycle
// }




