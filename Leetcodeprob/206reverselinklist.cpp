#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    node(int v){
        this->data=v;
        this ->next=NULL;
    }
};
class List{
node*head;
public:
List(){
    head=NULL;
}

void insertatbegin(int data){
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
void print(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


void reverse(){
    node*curr=head;
    node*next=NULL;
    node*prev=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

};
int main(){
    List LL;
    LL.insertatbegin(4);
    LL.insertatbegin(2);
    LL.insertatbegin(1);
    LL.insertatbegin(0);
    LL.print();
    cout<<endl;
    LL.reverse();
    LL.print();
    return 0 ;
}