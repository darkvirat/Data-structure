#include<iostream>
#include<queue>
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
  cout<<"enter element inserting in left "<<root->data;
  root->left=buildtree(root->left);
 cout<<"enter element inserting in right "<<root->data;
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
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
  }
 }
 void inorder(node*root){
  if(root!=NULL){
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
  }
 }
void levelordertraversal(node*root){
  queue<node*>q;
  q.push(root);
  while(!q.empty()){
    node*temp=q.front();
  cout<<temp->data<<" ";
  q.pop();
  if(temp->left){
    q.push(temp->left);
  }
  if(temp->right){
    q.push(temp->right);
        }
    }
}

int main(){
  node*root;
  root=buildtree(root);
  cout<<"the level order traversal data is "<<endl;
  levelordertraversal(root);
  cout<<endl;
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