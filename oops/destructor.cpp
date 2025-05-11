#include<iostream>
using namespace std ;
class Teacher{
    public:
    string name;
    string subject;
    string dept;
    Teacher(){
        cout<<"i am constructor "<<endl;
    }
    ~Teacher(){
        cout<<"i am destructor "<<endl;
    }
};
int main(){ 
    Teacher t1;
    
    return 0 ;
}