#include<iostream>
using namespace std ;
 void count(int n){
    if(n==0)
       return ;
   else {
    
     count(n-1);
      cout<<n<<" ";
   }
 }
int main(){
    int n;
    cin>>n;
 
  count(n);
 
}