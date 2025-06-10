#include<iostream>
#include<vector>
using namespace std ;
int binarysearch(vector<int>arr,int s,int e,int k){
    int n=arr.size();
    int mid=s+(e-s)/2;
    if(s>e) return -1;

    if(arr[mid]>k){
        return binarysearch(arr,s,mid-1,k);
}
    if(arr[mid]<k) return binarysearch(arr,mid+1,e,k);
    if(arr[mid]==k)  return mid;
}
int main(){
    vector<int>arr={1,2};
    int k=3;
    int n=arr.size();
    int s=0;
    int e=n-1;
    
    int result=binarysearch(arr,s,e,k);
    if(result!=-1) cout<<result;
    else cout<<"element not found";
    
    return 0 ;
}