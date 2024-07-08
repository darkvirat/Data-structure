#include<iostream>
using namespace std ;
void   reverseusingrecursion(int s ,int e , string& arr ){
      if(e<s) 
        return;
      
      else{
      swap(arr[s],arr[e]);
      s++;
      e--;
        reverseusingrecursion(s,e,arr);
      }
}
int main(){
  string arr = "tribhuwan";
  int n=arr.length()-1;
    reverseusingrecursion(0,n,arr);
    for (int i = 0; i <= n; i++)
    {
      cout<<arr[i];
    }
  return 0 ;
}