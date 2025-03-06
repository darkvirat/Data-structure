
// // power with n time complexity

// #include<iostream>
// using namespace std ;
// void pow(int x,int n){
//    int ans=1;
//     for (int i = 0; i < n; i++)
//     {
//         ans*=x;
//     }
//     cout<<ans;
    
// }
// int main(){
//     pow(5,3);
    
//     return 0 ;
// }



// power with logn time complexity

#include<iostream>
using namespace std;
int main(){
    float x;
    int n;
    cin>>x>>n;
    if(n<0){
        x=1/x;
        n=-n;
    }
    float ans=1;
    while(n>0){
        if(n%2==1){
            ans*=x;
        }
    x*=x;
    n/=2;

    }
    cout<<ans;


    return 0;
}