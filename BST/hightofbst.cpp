#include<iostream>
using namespace std ;
class node {
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

    
node*binsert(node*root,int data){
    node*temp;
    temp=new node(data);
    if(root==NULL){
        return temp;
    }
    else
    {node*parent,*curr;
    curr=root;
    while(curr!=NULL){
        parent=curr;
        if(data<curr->data) curr=curr->left;
        else if(data>curr->data) curr= curr->right;
        else return root;
    }
    if(parent->data>data)
    parent->left=temp;
    else 
    parent->right=temp;
    }
}
int hight(node*root){
    if(root==NULL){
        return 0;
    }
    int leftht=hight(root->left);
    int rightht=hight(root->right);
    int currht=max(leftht,rightht)+1;
    return currht;

}
void inorder(node*root){
  if(root!=NULL){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
 }
int main(){
    node*root=NULL;
    root=binsert(root,40);
    binsert(root,30);
    binsert(root,60);
    binsert(root,25);
    binsert(root,80);
    binsert(root,20);
    inorder(root);
    cout<<endl;
    cout<<hight(root);
    
    
    return 0 ;
}