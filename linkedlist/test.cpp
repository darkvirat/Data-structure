#include<iostream>
using namespace std;

//node class to represent a node of the linked list

class node{
    public:
       int data;
       node *link;

       //default constructor
       node()
       {
        data=0;
        link=NULL;
       }

       //parameterized constructor
       node(int data)
       {
        this-> data=data;
        this->link= NULL;
       }

};

//linked class to implement the singly linked list
class Linkedlist{
    node *START;
    
    public:
      //default constructor
      Linkedlist()
      {
        START=NULL;
      }

      //function to imsert a node at the start of the linked list
      void insertAtHead(int data)
      {
        //create the new node
        node *Newnode;
        Newnode= new node(data);    //new keyword to return the address of the Newnode back

        //Assign to START if the list is empty
        if(START==NULL)
        {
            START= Newnode;
            return;
        }

        //insert the newly created linked list at the heaad
        Newnode->link=START;
        START= Newnode;

      }

       
      

      //function to insert the node at the given position
      void insertAtPos(int data, int pos)
      {
        node *newNode;
        newNode=new node(data);

        //Assign to START if the list is empty
        if(START==NULL)
        {
            START= newNode;
            return;
        }
        node *temp2;
        temp2=START;
        for (int i=1;i<pos-1;i++)
        {
            temp2=temp2->link;
        }
         
        
        newNode->link=temp2->link;
        temp2->link=newNode;

      }

      //function to print the linked list
      void print()
      {
        node *temp=START;

        //check for the empty list
        if(START== NULL){
            cout<<"The list is empty.... ";
            return;
        }

        //traverse the list
        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->link;
        }
      }

      //function to print the element after multiplying it by 100
      void print1()
      {
        node *temp=START;

        //check for the empty list
        if(START==NULL)
        {
            cout<<"\nThe list is empty...";
            return;
        }

        //to traverse and update the elements
            temp->data=temp->data*100;
            cout<<temp->data<<"   ";
            temp=temp->link;
        
      }
};

//driver code
int main()
{
    //creating a Linkedlist object
    Linkedlist list;

    //inserting nodes
    list.insertAtHead(40);
    list.insertAtHead(30);
    list.insertAtHead(20);
    list.insertAtHead(10);
    cout<<"Elements of the list are: \n";

    //print the list
    list.print();
     

    //inserting nodes at the specific position
    cout<<"\nElements after insertion at 4th position are: \n";
    list.insertAtPos(99,4);
    list.print();

}