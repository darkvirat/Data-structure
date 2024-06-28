#include<iostream>
using namespace std ;
int main(){

   int arr[]={2,4,5,3,6,3,2,7};
   int n = sizeof(arr)/sizeof(arr[0]);
   int mx = arr[0];
   for (int i = 0; i < n; i++)
   {
    if(mx>arr[i]) mx=arr[i] ;
    
   }
   cout<<mx;
}