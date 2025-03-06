#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int r=0;
    int i=1;
   int ans=0;
   while (n!=0)
   {
    r=n%10;
    n=n/10;
    ans+=r*i;
    i*=2;
   }

   cout<<ans;
   
    return 0 ;
}