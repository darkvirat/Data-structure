#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class queue{
    public:
    node*head;
    node*tail;
    queue(){
        head=tail=NULL;
    }
     bool empty(){
        return head == NULL;
    }
    void push(int data){
        node*newnode=new node(data);
        if(head==NULL){
         head=tail=newnode;
        }
        else{
          tail->next=newnode;
            tail=newnode;
            }
    }

    void pop(){
        node*temp=head;
        head=head->next;
        delete temp;


    }
   
    int front(){
        return head->data;
    }
};
int main(){
    
    queue a;
    a.push(5);
    a.push(3);
    a.push(2);

    while(!a.empty()){
        cout<<a.front()<<endl;
        a.pop();
    }
    return 0 ;
}