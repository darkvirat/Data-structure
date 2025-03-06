#include<iostream>
using namespace std ;
int bubblesort(int arr[],int N ){
    for (int  i = 1; i <= N; i++)
    {
        for (int J = 1; J <= N-i; J++)
        {
           if(arr[J+1]<arr[J]) swap(arr[J+1],arr[J]);
        }   
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {                                                                                       
        cin>>arr[i];
    
    }
   
    bubblesort(arr,n);

     for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    
    }
    
    return 0 ;
}