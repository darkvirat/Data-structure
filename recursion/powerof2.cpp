#include<iostream>
using namespace std ;

     int pow(int n){
      
       if(n!=0){
         n=2*pow(n-1);
       }
          else return 1;
    
        }
 
   
int main(){
     int n;
     cin>>n;
    
cout<< pow(n);
return 0;
}
   

  