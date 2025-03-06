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
int hight(node*root){
    if(root==NULL){
        return 0;
    }
    int lftht=hight(root->left);
    int rhtht=hight(root->right);
    int currht=1+max(lftht,rhtht);
    return currht;
}
    node*getinordersuccessor(node*root){
        while(root->left!=NULL){
            root=root->left;
        }
        return root; //IS

    }
    node*delnode(node*root,int val){
        if(root==NULL){
            return NULL;
        }
        if(val<root->data){
            root->left=delnode(root->left,val);
        }
        else if(val>root->data){
            root->right=delnode(root->right,val);
        }
        else{
            // root==val
            // case1:0 children
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            // case 2 single child
            if(root->left==NULL || root->right==NULL){
                if(root->left==NULL) return root->right;
                if(root->right==NULL) return root->left;
            }
            // case 3 : 2 child;
            node*IS=getinordersuccessor(root->right);
            root->data=IS->data;
            delnode(root->right,IS->data); // case1,case2
            return root;
        }
        return root;
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
    delnode(root,30);
    cout<<endl;
    inorder(root);
    cout<<endl;
    cout<<hight(root);
    
    return 0 ;
}