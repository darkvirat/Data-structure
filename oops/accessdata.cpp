#include<iostream>
using namespace std ;
class Teacher{
    // acess modifier 
    public:
    // properties
    string name ;
    string dept;
    string salary;
    // methods
    void changedept(string newdept){
        dept=newdept;
    }
    
};
int main(){
    Teacher t1;
    t1.name="virat";
    t1.dept="CS";
    t1.salary="25000";
    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.dept<<endl;
     
 
    return 0 ;
}