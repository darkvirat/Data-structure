#include<iostream>
#include<vector>
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
    if(arr[i]==-1) return root;
    root->left=bininsert(arr);
    root->right=bininsert(arr);
    
    return root;
}
void inorder(node*root){
    if(root->data==-1) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    vector<int> arr={2,1,-1,-1,3,-1,5,-1,-1};
    node*root=bininsert(arr);
    inorder(root);

    return 0 ;
}