#include<iostream>
#include<vector>
using namespace std ;
void insertionsort(int v[],int n){
    
    for (int i = 1; i < n; i++)
    {
        int curr=v[i];
        // for finding our correct position
        int j=i-1;
        while(j>=0 && v[j]>curr){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=curr;
    }
    
return;


}


int main(){
    int n;
    cin>>n;
     int v[n];

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    insertionsort(v,n);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0 ;
}