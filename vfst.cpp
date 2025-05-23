#include<iostream>
using namespace std;
int pow(int x,int n){
    int ans=1;
    for (int i = 0; i <n; i++)
    {
        ans*=x;
    }
    cout<<ans;
    
}
int main(){
pow(5,3);

    return 0;
}