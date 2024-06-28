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

    int occ=-1;
for (int i = 0; i < v.size(); i++)
{    
    if(v[i]==x)
    occ = i;
}

    cout<<occ;




    return 0 ;
}