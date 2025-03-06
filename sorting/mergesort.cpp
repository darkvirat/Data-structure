#include<iostream>
using namespace std ;
void merge(int *arr,int s, int e){
    int mid = (s+e)/2;
    int an = mid-s+1;
    int bn= e-mid;

     int first[an];
     int second[bn];


    int k = s;
    for (int i = 0; i < an; i++)
    {
        first[i] =  arr[k];
        k++;
    }
     
    for (int i = 0; i < bn; i++)
    {
        second[i]=arr[k];
        k++;
    }
    // merge 2 sorted array
    // k = e-s+1;
    int i =0;
    int j = 0;
     k =s;
    while(i<an && j<bn ){
        if(first[i]<second[j]){
            arr[k]= first[i];
            i++;
            k++;
        }
        else {
            arr[k]=second[j];
            k++;
            j++;
        }
    }
    while(i<an) {
        arr[k]=first[i];
        i++;
        k++;

    } 
     
     while(j<bn){
        arr[k]=second[j];
        k++;
        j++;
    }
}

 void mergesort(int *arr,int s,int e){

// base case 
if(s>=e){
    return;
}
 int mid = (s+e)/2;

// left array
mergesort(arr,s,mid);
// right array
mergesort(arr,mid+1,e);

// for merge both left and write array the array

merge(arr,s,e);

 }
int main(){
    int arr[7]= {2,5,3,4,9,6,5 };
int n = sizeof(arr)/sizeof(arr[0]);
 mergesort( arr , 0, n-1);
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }
 
    return 0 ;
}