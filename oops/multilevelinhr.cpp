#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(){
        cout<<"parent constructor"<<endl;
    }
    
};

class student : public person{
    public:
        int roll_no;
       

};

class graduate : public student{
    public:
        string research_area;
        graduate(string reas,string n,int a,int r){
            cout<<"child costructor"<<endl;
            research_area=reas;
            name=n;
            age=a;
            roll_no=r;
        }

        void getinfo(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<roll_no<<endl;
            cout<<research_area<<endl;
        }
    

};
int main(){
    graduate g1("maths","virat",23,240159);
    g1.getinfo();
    return 0 ;
}