 #include<iostream>
 using namespace std ;
 int partition(int arr[] ,int s,int e){
    int i = s-1;
    int j= s;
    int pivot = arr[e];
    for (; j < e; )
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);

        }
        j++;
    }
    swap(arr[i+1],arr[e]);
    return i+1;

 }
void quicksort(int arr[],int s,int e){
    if(s>=e) {
        return;
    }

 int pi=partition(arr,s,e);
 quicksort(arr,0,pi-1);
 quicksort(arr,pi+1,e);

}

 int main(){
    int arr[]={2,17,12,15,10,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0 ;
 }