#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*link;
    // node(){
    //     data=0;
    //     link=NULL;

    // }
    node(int data){
        this->data=data;
        this->link=NULL;
    }
};

class Linklist{
    node*START;
    public:
    Linklist(){
        START=NULL;

    }


    void insertatend(int data){
        node*newNode;
        newNode=new node(data);
    if(START==NULL){
        START=newNode;
        return;
    }
    
     node*temp1;
     temp1=START;
     while(temp1->link!=NULL){
        temp1=temp1->link;
     }
     temp1->link=newNode;
    }

    void print(){
        node*temp=START;
        if(START==NULL){
            cout<<"list empty"<<endl;

            return;
        }

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->link;
        }


    }
};
int main(){
int arr[]={1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);

Linklist list;
// list.insertatend(40);
// list.insertatend(30);
// list.insertatend(20);
// list.insertatend(10);
// cout<<"element of the list are ";
for (int i = 0; i < n; i++)
{
   list.insertatend(arr[i]);
}

 
 list.print();
 cout<<endl;

    return 0 ;
}