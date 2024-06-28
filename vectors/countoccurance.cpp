#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int>v(7);

    for (int i = 0; i < v.size(); i++)
    {
              cin>>v[i];
              }
    int x;
     cout<<"type x ";
    cin>>x;

    int count=0;
for (int i = 0; i < v.size(); i++)
{    
    if(v[i]==x)
    count+=1;
}

    cout<<count;




    return 0 ;
}




