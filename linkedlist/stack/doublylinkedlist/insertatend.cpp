#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
class doubly{
    node*head;
     public:
    doubly(){
        
        head=NULL;
    }

     void insertatend(int data){
        node*newnode=new node(data);
        if(head==NULL){
            head=newnode;
            return;
        }
        node*temp;
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        
        temp->next=newnode;
        newnode->prev=temp;

     }
    //  void deleteathead(){
    //     node*temp=head;
    //     if(head==NULL){
    //         cout<<"deletion is not possible ";    
    //     }
    //     head=head->next;
    //     (temp->next)->prev=NULL;
    //     delete temp;

    //  }
    //  void deleteatend(){
    //     node*temp=head;
    //     if(head==NULL){
    //         cout<<"deletion is not possible ";    
    //     }
    //     while(temp->next->next!=NULL){
    //         temp=temp->next;
    //     }
    //     temp->next=NULL;

    //  }
     void deleteatspecific(int pos){
        node*temp=head;
        if(head==NULL){
            cout<<"deletion is not possible ";    
        }
        int i=1;
        while(temp->next!=NULL && i<pos){
            temp=temp->next;
            i++;
        }

        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        // delete temp;

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
    doubly b;
    b.insertatend(5);
    b.insertatend(6);
    b.insertatend(4);
    b.print();
    cout<<endl;
    // b.deleteathead();
    // b.print();
    // cout<<endl;
    // b.deleteatend();
    // b.print();
    b.deleteatspecific(2);
    b.print();
    
    
    return 0 ;
}