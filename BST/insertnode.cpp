#include<iostream>
#include<queue>
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
void inorder(node*root){
  if(root!=NULL){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
 }
 void levelordertraversal(node*root){
  queue<node*>q;
  q.push(root);
  
  while(!q.empty()){
    node*curr=q.front();
  q.pop();
  if(curr!=NULL){
 cout<<curr->data<<" ";
  if(curr->left){
    q.push(curr->left);
  }
  if(curr->right){
    q.push(curr->right);
        }
      }
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
    levelordertraversal(root);
    
    
    return 0 ;
}