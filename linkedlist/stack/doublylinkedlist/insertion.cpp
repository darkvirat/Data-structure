#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};
class doubly{
    public:
    node*head;
    doubly(){
        head=NULL;
    }

    void innsertionathead(int data){
    node*newnode=new node(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    else{
         
         newnode->next=head;
         head->prev=newnode;
         head=newnode;
        
    }
}
 void print(){
        node*temp;
        temp=head;
        while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        }
    }
};
int main(){
    doubly s;
    s.innsertionathead(5);
    s.innsertionathead(6);
    s.innsertionathead(4);
    s.print();
    
    return 0 ;
}