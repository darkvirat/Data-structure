#include<iostream>
#include<vector>
using namespace std ;

void selectionsort(vector<int>&v){
    int n=v.size();
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j< n; j++)
        {
            if(v[j]<v[min]) min=j;
        }
        if(i!=min)
       swap(v[min],v[i]); 
    }
    

return ;

}



int main(){
    int n; 
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i<n; i++)
    {
        cin>>v[i];
    }

    selectionsort(v);

       for (int i = 0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    

}