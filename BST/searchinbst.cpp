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
 
    node*search(node*root,int val){
        if(root==NULL){
            return NULL;
        }
        if(val<root->data){
            root->left=search(root->left,val);
        }
        else if(val>root->data){
            root->right=search(root->right,val);
        }
        else{
            cout<<"true";
        }
    }
node*binsert(node*root,int data){
    node*temp;
    temp=new node(data);
    if(root==NULL){
        return temp;
    }
    node*parent,*curr;
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
    return root;
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
    binsert(root,25);
    binsert(root,20);
    binsert(root,10);
    inorder(root);
    cout<<endl;
 search(root,25);
    
    return 0 ;
}