#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(){
        cout<<"parent constructor"<<endl;
    }
    ~person(){
        cout<<"parent destructor"<<endl;
    }
};

class student : public person{
    public:
        int roll_no;
        student(string n,int a,int r){
            cout<<"child costructor"<<endl;
            name=n;
            age=a;
            roll_no=r;
        }

        void getinfo(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<roll_no<<endl;
        }
         ~student(){
        cout<<"child destructor"<<endl;
    }

};
int main(){
    student s1("virat",23,240159);
    s1.getinfo();
    return 0 ;
}