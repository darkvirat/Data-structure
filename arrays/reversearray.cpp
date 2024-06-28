

// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"enter size of array : ";
//     cin>>n;
//     int arr[n];
//         for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     int start=0;
//     int end=n-1;

//     while (start<=end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    


//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//         cout<<" ";
//     }
   
    
//     return 0 ;
// }




#include<iostream>
using namespace std ;
int main(){
      int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
     
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }


    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
       cout<<endl;
int brr[n];
   
       for(int i = 0; i < n; i++)
    {
       brr[i]=arr[n-i-1];
    }
       
          for (int i = 0; i < n; i++)
    {
       cout<<brr[i]<<" ";
    }
   
 




    return 0 ;
}