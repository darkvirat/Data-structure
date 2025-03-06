#include<iostream>
using namespace std ;
int binarysearch(int arr[],int s,int e,int x){
    if(e>=s){
   int mid= s+(-s+e)/2;
if(arr[mid]==x) return mid ;
else if(arr[mid]>x)  return binarysearch(arr,s,mid-1,x);
else if(arr[mid]<x)  return binarysearch(arr,mid+1,e,x);
}
return -1;
}
int main(){
cout <<"enter the size of the array ";
    int n ;
    cin>>n;
    int arr[n];
    cout<<"enter the array element ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int x;
    cout<<"enter the value of  search  value x ";
    cin>>x;
    int result= binarysearch(arr,0,n-1,x);
    if(result==-1)
     cout<<"not present";
     else cout<<"index is "<<result;

    return 0 ;
}