#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>arr={1};
    int n = arr.size();
    int st=0,end=n-1;
    if(n==1){ cout<<arr[0];
            return 0;}
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && arr[mid]!=arr[mid+1]){ cout<< arr[mid];
                    return 0;}
        if(mid==n-1 && arr[mid]!=arr[mid-1]) {cout<< arr[mid];
        return 0;}
        if(mid>0 && (arr[mid]!=arr[mid-1]) && (mid<n-1 && arr[mid]!=arr[mid+1])){
            cout<<arr[mid];
            return 0;
            
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid-1]){
                end=mid-1;
            }
            else {
                st=mid+1;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }

            
        }
    }
    
    return 0 ;
}