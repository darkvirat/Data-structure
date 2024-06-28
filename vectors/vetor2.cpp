#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n;
    cout<<"type the size of array ";
    cin>>n;
    vector<int> arr(n,5);
    for (int i = 0; i < n; i++)
    { 
        cout<<arr[i];
        cout<<endl;
    }
    


    return 0 ;
}