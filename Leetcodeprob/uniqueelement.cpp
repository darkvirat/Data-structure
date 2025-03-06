#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int ans=0;
   vector<int>a={1,2,5,2,5};
   for (int i = 0; i < a.size(); i++)
   {
      ans=ans^a[i];
   }
   cout<<ans;
    
    return 0 ;
}