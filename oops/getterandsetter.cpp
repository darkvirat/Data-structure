
/*For access the private date member */


#include<iostream>
using namespace std ;
class Teacher{
    int salary;
    public:
    string name ;
    string dept;

    void setsalary(double s ){
        salary=s;
    }
    double getsalary(){
        return salary;
    }
};
int main(){
    /*static allocation*/
    Teacher a;       
     a.setsalary(25000);
     cout<<a.getsalary();
   


    return 0 ;
}