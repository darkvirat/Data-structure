#include<iostream>
#include<vector>
using namespace std ;
int peackelementinarray(vector<int>&arr,int s,int e){   
    int n=arr.size();
    int mid=s+(e-s)/2;
    if(s>e) return -1;
     if ((mid == 0 || arr[mid - 1] < arr[mid]) && 
        (mid == n - 1 || arr[mid] > arr[mid + 1])) 
        return mid;
    if( arr[mid]<arr[mid+1]) return peackelementinarray(arr,mid+1,e);
    if(arr[mid-1]>arr[mid]) return peackelementinarray(arr,s,mid-1);
}
int main(){
    vector<int>arr={1,2,3,2,1};
    int n=arr.size();
    int s=0;
    int e=n-1;
    cout<<peackelementinarray(arr,s,e);
    
    return 0 ;
}