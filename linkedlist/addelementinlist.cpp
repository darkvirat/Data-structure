#include<iostream>
using namespace std ;
class node{
    public:
    int pre;
    int data;
    node*next;

    node(int value,int pre){
        this->pre=pre;
        data= value;
        next= NULL;
    }

};
class pre{
    public:
    node*head;
    pre(){
        head=NULL;
    }
    void pri(int data, int pre){
        node*newnode=new node(data,pre);
        if(head==NULL) {
            head= newnode;
            return;
        }
        if(pre>head->pre){
            newnode->next=head;
            head=newnode;
        }
        else {
            node*temp=head;
            while(temp->next!=NULL && pre<temp->next->pre){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;

        }
    }


};
int main(){
  
    
    return 0 ;
}