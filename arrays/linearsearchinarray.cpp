#include<iostream>
using namespace std ;
int main(){
     int arr[]={1,3,5,2,1,3,6,5};
     int n = sizeof(arr);
    int x;
    cout<<" enter target value : ";
    cin>>x;
    bool flag;
    for (int i = 0; i < n; i++){
   
    
    if (arr[i]==x)
    {
       flag=true;
    }
    }
   if (flag==true)
   {
   cout<<x<<" is preasent ";
   }
   
else cout<<x<< " is not present";
    return 0 ;
}