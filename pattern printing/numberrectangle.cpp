// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"type the value of n ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
    
//         while(j<=n){                         
            
            
//                                                     // 1 1 1 1 
//                                                     // 2 2 2 2 
//                                                     // 3 3 3 3 
//                                                     // 4 4 4 4 
//         cout<<i<<" ";
//         j++;
//         }
//         cout<<endl;
//          i++;
//     }
    

//     return 0 ;
// }










// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"type the value of n ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
    
//         while(j<=n){                         
//                                             //   1 2 3 4 
//                                             //   1 2 3 4 
//                                             //   1 2 3 4 
//                                             //   1 2 3 4 
//         cout<<j<<" ";
//         j++;
//         }
//         cout<<endl;
//          i++;
//     }
    

//     return 0 ;
// }












// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"type the value of n ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
    
//         while(j<=n){                      
//                                             //    A B C D 
//                                             //    A B C D 
//                                             //    A B C D
//                                             //    A B C D  
//         cout<<char(j+64)<<" ";
//         j++;
//         }
//         cout<<endl;
//          i++;
//     }
    

//     return 0 ;
// }









// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"type the value of n ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
    
//         while(j<=n){                      
//                                                 //   A A A A
//                                                 //   B B B B
//                                                 //   C C C C
//                                                 //   D D D D  
//         cout<<char(i+64)<<" ";
//         j++;
//         }
//         cout<<endl;
//          i++;
//     }
    

//     return 0 ;
// }











#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"type the value of n ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
    
        while(j<=n){ 

            if(i%2==0) cout<<j<<" ";
            else cout<<char(j+64)<<" ";                      
                                                    // A A A A
                                                    // 2 2 2 2
                                                    // C C C C
                                                    // 4 4 4 4  
        
        j++;
        }
        cout<<endl;
         i++;
    }
    

    return 0 ;
}