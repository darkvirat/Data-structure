#include<iostream>
using namespace std ;
int binerysearch(int arr[],int s,int e,int target){
 while(s<=e){
int  mid = (s+e)/2;
if(arr[mid]==target){
cout<<mid;
break;
}

else if(arr[mid]<target) s=mid+1;
else e=mid-1;}
}
int main(){
   int arr[]={4,6,7,8,2,3,56,12};
   int n=sizeof(arr)/sizeof(arr[0]);
   binerysearch(arr,0,n,2);
   
   return 0 ;
}