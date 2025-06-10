#include<iostream>
#include<queue>
#include<vector>
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
static int idx=-1;
node*buildTree(vector<int>preorder){
idx++;
if(preorder[idx]==-1){
    return NULL;
}
 node*root=new node(preorder[idx]);
 root->left=buildTree(preorder);
 root->right=buildTree(preorder);

 return root;

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
    vector<int>preorder{1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node*root=buildTree(preorder);
  
  cout<<"the level order traversal is "<<endl;
  levelordertraversal(root);
    
    return 0 ;

}
