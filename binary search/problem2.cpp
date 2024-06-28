/* given a sorted array of n element and given a target value x find the first occurance of that element  */

#include<iostream>
using namespace std ;
int main(){
    int arr[]= {1,3,3,3,5,5,6,7,8,8,9} ;
    int n=sizeof(arr);
    int x;
    cin>>x;
    int lo=0;
    int hi=n-1;
    int mid ;
    while (lo<=hi)
    {
       mid= (lo+hi)/2 ;
       if (arr[mid]==x) {
        if(mid>0 && arr[mid]==arr[mid-1]) hi=mid-1 ;
        else cout<<mid;
        break;
       }
       else if(arr[mid]>x) hi = mid-1  ;
    else lo=mid+1;
       
       
   
    }
    if (lo>=hi) return -1;
    


    return 0 ;
}