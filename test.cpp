#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int v){
        this->data=v;
        this->next=this->prev=NULL;
    }
};

class doubly{
    public:
    node*head;
    doubly(){
        head=NULL;
    }

    void push(int data){
        node*newnode=new node(data);
        if(head==NULL) {
            head=newnode;
            return;
        }
        else{
            newnode->next=head;
            head=newnode;
            newnode->prev=NULL;
        }
    }
    void print(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    doubly l;
    l.push(5);
    l.push(4);
    l.push(3);

    l.print();
    
    return 0 ;
}