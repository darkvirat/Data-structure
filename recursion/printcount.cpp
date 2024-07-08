#include<iostream>
using namespace std ;
bool issorted(int arr[],int size){
  // base case 
  if(size==0 || size == 1) return true ;

  if(arr[0]>arr[1]) return false; 
  else  issorted(arr+1,size-1);
  
  



}
int main(){
     int size = 4;
    int arr[4] = {2,4,3,6};
    bool ans = issorted(arr,size);
    if (ans==true) cout<<"sorted";
    else cout <<" not sorted ";
 
   
}
