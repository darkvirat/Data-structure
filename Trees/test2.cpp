#include<iostream>
using namespace std ;
class node{
  public:
  int data;
  node*left ;
  node * right;


  node(int value){
    this->data=value ;
    this->left=NULL;
    this->right=NULL;
  }
};
node*buildtree(node*root){
  
  int data;
  cin>>data;
  root=new node(data);
  if(data==-1){
    return NULL;
  }
  else {
  cout<<"enter element inserting in left "<<root->data<<endl;
  root->left=buildtree(root->left);
 cout<<"enter element inserting in right "<<root->data<<endl;
  root->right=buildtree(root->right);
  return root;
  }

}
 void preorder(node*root){
  if(root!=NULL){
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
  }
 }
 void postorder(node*root){
  if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
  }
 }
 void inorder(node*root){
  if(root!=NULL){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
 }
 

int main(){
  node*root;
root =buildtree(root);
  cout<<"the preorder traversal data is ";
  preorder(root);
  cout<<endl;
  cout<<"the postorder traversal data is ";
  postorder(root);
    cout<<endl;
  cout<<"the inorder traversal data is ";
  inorder(root);

    
    return 0 ;
}