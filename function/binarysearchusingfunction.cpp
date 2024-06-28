#include<iostream>
#include<vector>
using namespace std ;
int binarysearch(vector<int>arr,int size ,int target){
    int n= arr.size();
    int s=0;
    int e=n-1;
    while (s<e)
    {
       while(s<e){
     int mid=(s+e)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) e=mid-1;
    else{ s=mid+1;}
        
    }
    

}
// return -1;

}

int main(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   
  cout<<binarysearch(arr,n,4);
    return 0;
}