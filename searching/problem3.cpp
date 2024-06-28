 #include<iostream>
using namespace std ;
int main(){
  int arr[]={1,4,3,5};
  int x=5;
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
    for (int j = i; j < n; j++)
    {
        if ((arr[i]+arr[j])==x)
        {
           cout<<"["<<i<<","<<j<<"]";
           break;
        }
        
    }
    
   }
}