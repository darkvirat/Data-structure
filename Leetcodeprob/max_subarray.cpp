//   brute force aproach
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

// int n=5 ;
// int arr[]={1,2,3,4,5};
// int maxSum=INT8_MIN;
// for (int st = 0; st < n; st++)
// {
//     int currSum=0;
//     for (int end= st; end <n; end++)
//     {
//         currSum+=arr[end];
//         maxSum=max(currSum,maxSum);
//     }
   
// }
// cout<<maxSum;



//     return 0;
// }




// kardne,s algorithm

#include<iostream>
using namespace std ;
int main(){
    int n=9;
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int currSum=0,maxSum=INT8_MIN;
    for (int i = 0; i <n; i++)
    {
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
        currSum=0;
        }
    }
    cout<<maxSum;
    
    return 0 ;
}
