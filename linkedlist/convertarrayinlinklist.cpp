#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node*next;

    node(int value){

        data= value;
        next= NULL;
    }

};
int main(){
    node *head;
    head=NULL;
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
    if(head==NULL){
        head=new node(arr[i]);
    }
    else{
        node*temp;
        temp=new node(arr[i]);
        temp->next=head;
        head = temp;
    }
   
    }
     node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    return 0 ;
}