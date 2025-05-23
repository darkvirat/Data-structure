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
class LL1{
    public:
    node*h2;
    LL1(){
        h2=NULL;
    }
    void insert(int v){
        node*newnode=new node(v);
        if(h2==NULL){
            h2=newnode;
            return ;
        }
        else{
            newnode->next=h2;
            h2=newnode;
        }
    }

    void print(){
        node*temp=h2;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};


class LL2{
    public:
    node*h1;
    LL2(){
        h1=NULL;
    }
    void insert(int v){
        node*newnode=new node(v);
        if(h1==NULL){
            h1=newnode;
            return ;
        }
        else{
            newnode->next=h1;
            h1=newnode;
        }
    }

    void print(){
        node*temp=h1;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    LL1 b;
    LL2 c;
    b.insert(5);       
    b.insert(3);
    b.insert(1);


    c.insert(6);       
    c.insert(4);
    c.insert(2);
    b.print();
       cout<<endl;
    c.print();
 
   
    return 0 ;
}