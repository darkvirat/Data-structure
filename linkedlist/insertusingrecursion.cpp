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

node*createlinklist(int arr[],int index,int size){
    // base case
    if(index==size)
    return NULL;

    node*temp;
    temp=new node(arr[index]);
    temp->next=createlinklist(arr,index+1,size);
    return temp;
}
int main(){
    node *head;
    head=NULL;
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);


     head= createlinklist(arr,0,n);
    
     node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    return 0 ;
}