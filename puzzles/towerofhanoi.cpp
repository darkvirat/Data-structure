#include<iostream>
using namespace std ;
void TOWER(int N, char BEG,char AUX,char END){
   
    if(N==0) {return;
    } 
     TOWER(N-1,BEG,END,AUX);
     cout<<"move disk "<<N<<" from "<<BEG<<" to "<<END<<endl;
     TOWER(N-1, AUX,BEG,END);



}
int main(){
    int n;
    
    cout<<"enter the number of disk ";
    cin>>n;
   TOWER(n, 'a','b','c');
    return 0 ;
}