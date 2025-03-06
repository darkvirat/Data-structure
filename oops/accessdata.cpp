#include<iostream>
using namespace std ;
class hero {
    public:
    int age ;
    string name ;
};
int main(){
    hero virat;

    virat.age=25;
    virat.name = "tribhuwan singh";
    cout<<"age is "<<virat.age<<endl;
    cout<<" name  is "<<virat.name<<endl;
    
    return 0 ;
}