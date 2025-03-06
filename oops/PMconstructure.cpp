#include<iostream>
using namespace std ;
class man{
    public:
    int age;
    int marks;
    
man(int age,int marks){
    this-> age=age;
    this->marks=marks;
    


    }
int print(){
    cout<<age*marks;
}



};
int main(){
    man b(5,5);
    b.print();
    
    
    return 0 ;
}