#include<iostream>
#include<vector>
using namespace std ;
int searchinrotatedarray(vector<int>arr,int s,int e,int k){
    int n=arr.size();
    while(s<=e){
    int mid=s+(e-s)/2;
    if(arr[mid]==k) return mid;
    if(arr[s]<=arr[mid]){
        if(arr[s]<=k && k<=arr[mid]) e=mid-1;
        else s=mid+1;
    }
    else {
        if(arr[mid]<=k && k<=arr[e]) s=mid+1;
        else e=mid-1;
    }
}
}
int main(){
    vector<int>arr={4,5,6,7,0,1,2,3};
    int n=arr.size();
    int s=0;
    int e=n-1;
    int k=5;
    cout<<searchinrotatedarray(arr,s,e,k);
    
    return 0 ;
}