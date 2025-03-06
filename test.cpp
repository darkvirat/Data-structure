#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int i,j;
    int target = 10;
    int arr[]={1,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    i=0;
    j=n-1;
    while (i<j)
    {
        if(arr[i]+arr[j]>target) j=j-1;
        else if(arr[i]+arr[j]<target) i=i+1;
        else{ cout<<"pair is "<<i<<","<<j;
             break;
            
            
            }

    }
    
    return 0 ;
}