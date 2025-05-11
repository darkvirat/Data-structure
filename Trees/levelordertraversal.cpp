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
  cout <<"enter data ";
  int data;
  cin>>data;
  root=new node(data);
  if(data==-1){
    return NULL;
  }
  else {
  cout<<"enter element inserting in left of  "<<root->data<<endl;
  root->left=buildtree(root->left);
 cout<<"enter element inserting in right of "<<root->data<<endl;
  root->right=buildtree(root->right);
  return root;
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
  root=buildtree(root);
  cout<<"the level order traversal is "<<endl;
  levelordertraversal(root);
    
    return 0 ;

}
