// #include<iostream>
 
// using namespace std ;
// int binary(int arr[],int size,int target){

// int s=0;
// int e=size;

// while(s<e){
//      int mid=(s+e)/2;
//     if(arr[mid]==target) return mid;
//     else if(arr[mid]>target) e=mid-1;
//     else{ s=mid+1;}
   
// }
// return -1;
// }

// int main(){
// int arr[]={1,2,3,4,5,6};
//   cout<<binary(arr,6,6);
    
// }


#include<iostream>
using namespace std ;
int main(){
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
int s=0;
int e=n-1;
int target=6;

while(s<=e){
     int mid=(s+e)/2;
    if(arr[mid]==target){ cout<<mid;
    break;
    }
    else if(arr[mid]>target){ e=mid-1;
    }
     
    else{ s=mid+1;
    }
    
}
  
}