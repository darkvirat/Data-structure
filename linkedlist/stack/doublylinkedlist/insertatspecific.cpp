#include<iostream>
using namespace std ;
class node{
    public:
    int data ;
    node*next;
    node*prev;
    node(int value){
        data= value;
        next= NULL;
        prev=NULL;
    }
};

class specific{
    node*head;
     public:
     specific(){
        head= NULL;

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
     void speciific(int x,int pos){
        node*newnode=new node(x);
            node*temp=head;
            
            int i=1;
            while(i<pos-1 && temp!=NULL){
                temp=temp->next;
                i=i+1;
            }
            if(i==1){
                head->prev=newnode;
                newnode->next=head;
                head=newnode;

            }

            else if(temp!=NULL){
                newnode->data=x;
                newnode->next=temp->next;
                newnode->prev=temp;
                (temp->next)->prev=newnode;
                temp->next=newnode;
                
            }
        //  else {
        //     cout<<"position is out of range ";
        //  }

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

specific s;
     s.innsertionathead(5);
    s.innsertionathead(6);
    s.innsertionathead(4);
    s.innsertionathead(2);
    s.innsertionathead(1);
    s.print();
    cout<<endl;
    s.speciific(10,1);
    s.print();
    
    return 0 ;
}