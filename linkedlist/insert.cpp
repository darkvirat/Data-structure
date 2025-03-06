#include<iostream>
using namespace std;
int main()
{
   
   int arr[20];
  
   int ITEM = 14;
   int N,K,J;
   cout<<"enter the size of arrray ";
   cin>>N;
   for (int  i = 1; i <= N; i++)
   {
    cin>>arr[i];
   }
   
   cout<<"element before insertion ";
   for (int i = 1; i<=N; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;

cout<<"enter the postion ";
cin>>K;
J=N;
while (K<=J){
    arr[J+1]=arr[J];
    J=J-1;
}
   arr[K]=ITEM;
   N=N+1;
cout<<"element after intertion ";
   for (int i = 1; i<=N; i++)
   {
    cout<<arr[i]<<" ";
   }
}

 

