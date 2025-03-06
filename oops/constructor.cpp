#include<iostream>
using namespace std ;
class ramesh{
    public:
    int age;
    string name;

/*NON  PARAMETRIC CONSTRUCTOR*/
    ramesh(){

        cout<<"I am a constructor "<<endl;
    }

};
int main(){
    ramesh b1;

b1.name = "gold";
b1.age = 5;

cout<<b1.name<<endl;
cout<<b1.age<<endl;
    
    return 0 ;
}