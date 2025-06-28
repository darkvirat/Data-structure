#include<iostream>
#include<vector>
#include<queue>
using namespace std ;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int i=-1;
node*bininsert(vector<int>arr){
    i++;
     node*root=new node(arr[i]);
    if(arr[i]==-1) return NULL;
    root->left=bininsert(arr);
    root->right=bininsert(arr);
    return root;
}
void levelordertraversal(node*root){
  queue<node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    node*temp=q.front();
        q.pop();
    if(temp==NULL){ 
     if(!q.empty()){
        cout<<endl;
        q.push(NULL);
        continue;
     }
     else break;
    }
    cout<<temp->data<<" ";

  if(temp->left){
    q.push(temp->left);
  }
  if(temp->right){
    q.push(temp->right);
        }
         
        
    }
}


int main(){
    vector<int> arr={2,1,-1,-1,3,-1,5,-1,-1};
    node*root=bininsert(arr);
    levelordertraversal(root);

    return 0 ;
}