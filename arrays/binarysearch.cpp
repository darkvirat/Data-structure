#include<iostream>
using namespace std ;
int main(){
     int arr[]={1,3,5,7,9,13,45};
     int n = sizeof(arr);
    int x;
    cout<<" enter target value : ";
    cin>>x;
    int lo=0;
    int hi=n-1;
    int mid;
    while (lo<=hi)
    {   mid=(lo+hi)/2;
    if(arr[mid]==x) cout<<x<<" is present ";
    if(arr[mid]>x) hi = mid-1  ;
    else lo=mid+1;
       
    }
    

    return -1;
}