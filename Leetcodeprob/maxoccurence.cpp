// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int>arr={1,1,2,2,2,3,3,3,3,3};
//     int n=arr.size();
//     int fre=1,ans=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==arr[i-1]) {
//             fre++; 
//             if (fre>n/2) return ans; 
//         }
//         else{ ans=arr[i];
//             fre=1;
//         }
//     }

//     cout<<ans;
    
//     return 0 ;
// }


#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>arr={1,2,1,1,3,2,1};
    int n=arr.size();
    int fre=0;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(fre==0){
            ans=arr[i];
        }
        if(ans=arr[i]){
            fre++;
        }
        else{ fre--;
         
        }
    }
    cout<<ans;
    return 0 ;
}