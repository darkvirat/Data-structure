#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n;
    cout<<"type the size of array ";
    cin>>n;
    vector<int> arr(n,5);
      cout<<arr.size()<<endl;
    arr.push_back(10);
    cout<<arr.size()<<endl;
    for (int i = 0; i < n; i++)
    { 
      
        cout<<arr[i]<<" ";
        
    }
    // cout<<endl;
    // cout<<arr.size()<<endl;
    // arr.push_back(10);
    // cout<<arr.size()<<endl;

    return 0 ;
}