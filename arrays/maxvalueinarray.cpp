#include<iostream>
using namespace std ;
int main(){
int mx=INT8_MIN;
int arr[]={4,5,6,7,7,1,2};
int n= sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n-1; i++)
{
   if(mx<arr[i]) mx=arr[i];
}
cout<<mx;

  
}