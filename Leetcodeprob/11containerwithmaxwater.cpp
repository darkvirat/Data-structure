// //  brute force aproach

// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int>arr={1,8,6,2,5,4,8,3,7};
//    int maxarea=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i+1; j < arr.size(); j++)
//         {
//             int w=j-i;
//             int h=min(arr[i],arr[j]);
//             int area = w*h;
//             maxarea=max(area,maxarea);
//         }
        
//     }
//     cout<<maxarea;
    
//     return 0 ;
// }

// optimal aproach

#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>arr={8,7,2,1};
    int n=arr.size();
    int lp=0,rp=n-1,ans=0;
    while(lp<rp){
        int ht=min(arr[lp],arr[rp]);
        int wth=rp-lp;
        int area=ht*wth;
        ans=max(area,ans);
        if(arr[lp]<arr[rp]) lp++;
        else rp--;
    }
    cout<<ans;
    return 0 ;
}