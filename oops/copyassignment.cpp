#include<iostream>
using namespace std ;
class Teacher{
    public:
    string name;
    string dept;
    string subject;
    Teacher(string n,string d,string s){
        name=n;
        dept=d;
        subject=s;
    }

    void getinfo(){
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<subject<<endl;
    }
};
int main(){
    Teacher t1("virat","CS","maths");
    t1.getinfo();
    Teacher t2(t1);
    t2.getinfo();
    return 0 ;
}