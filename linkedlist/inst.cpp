#include<iostream>
using namespace std ;
int main(){
    int LA[5]={1,2,3,4,5};
    int N=5;
    for (int  i = 0; i < N; i++)
    {
        LA[i]=i;
    }
    int K =2;//position
    int ITEM=8;
    int J=N;
    while (J>K)
    {
        LA[J+1]=LA[J];
        J=J-1;
    }
    LA[K]=ITEM;
    N=N+1;



    for (int i = 0; i < N; i++)
    {
        cout<<LA[i]<<" ";
    }
    
    
    
    return 0 ;
}