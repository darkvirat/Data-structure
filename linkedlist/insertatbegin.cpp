#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*link;
    node(){
        data=0;
        link=NULL;

    }
    node(int data){
        this->data=data;
        this->link=NULL;
    }
};



class Linklist{ 
    public:
    node*head;
    Linklist(){
        head=NULL;

    }


    void insertathead(int data){
        node*newNode = new node(data);
        
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->link=head;
    head=newNode;

    }

    void print(){
        node*temp=head;
        if(head==NULL){
            cout<<"list empty"<<endl;

            return;
        }

        while(temp!=NULL){
            
            cout<<temp<<" ";
            temp=temp->link;
        }


    }
};
int main(){

Linklist list;
list.insertathead(40);
list.insertathead(30);
list.insertathead(20);
list.insertathead(10);
cout<<"element of the list are ";
 
 list.print();
 cout<<endl;

    return 0 ;
}