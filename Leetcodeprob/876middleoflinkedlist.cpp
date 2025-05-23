#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    node(int c){
        data=c;
        next=NULL;
    }
};
class LL{
    public:
    node*head;
    LL(){
        head=NULL;
    }
    void insert(int v){
        node*newnode=new node(v);
        if(head==NULL){
            head=newnode;
            return ;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }

    void print(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    int middleNode() {
        
        node*slow=head;
        node*fast=head;
        while((fast!=NULL) && (fast->next!=NULL)){
            fast=fast->next->next;
            slow=slow->next;
        }
        return (slow->data);
    }




};
int main(){
    LL b;
    b.insert(5);    
    b.insert(4);    
    b.insert(3);
    b.insert(1);
    b.insert(2);
    b.print();
    cout<<endl;
    cout<<b.middleNode();
    return 0 ;
}