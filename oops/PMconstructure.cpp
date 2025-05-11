#include<iostream>
using namespace std ;
class Teacher{
public:
string name ;
string dept;
string subject;
string salary;
// parameterized constructor
Teacher(string n,string d,string sub,string sal){
    name = n;
    dept=d;
    subject=sub;
    salary=sal;
}

void getinfo(){
    cout<<name<<endl;
    cout<<salary<<endl;
    cout<<subject<<endl;
    cout<<dept<<endl;
}

};


int main(){
    Teacher t1("virat","MnC","CS","25000");
    t1.getinfo();
    return 0 ;
}