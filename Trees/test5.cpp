#include<iostream>
#include<vector>
using namespace std;
int binaryseach(vector<int>arr,int k){
    int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>k) e=mid-1;
        else if(arr[mid]<k) s=mid+1;
        else return mid;

    }

}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    int k=1;
    cout<<binaryseach(arr,k);
 
    return 0;
}