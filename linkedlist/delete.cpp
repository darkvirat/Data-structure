#include<iostream>
using namespace std;
int main()
{
   
   int arr[20];
  
     int N,K,J;
   cout<<"enter the size of arrray ";
   cin>>N;
   for (int  i = 1; i <= N; i++)
   {
    cin>>arr[i];
   }
   
   cout<<"element before deletion ";
   for (int i = 1; i<=N; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;

cout<<"enter the postion ";
cin>>K;

  int ITEM = arr[K]; 
J=K;
// for (int i = K; i<N; i++)
// {
//       arr[i]=arr[i+1];

// }
while (J<=N-1)
{
   arr[J]=arr[J+1];
   J=J+1;
}

   N=N-1;
cout<<"element after deletion ";
   for (int i = 1; i<=N; i++)
   {
    cout<<arr[i]<<" ";
   }
}

 

