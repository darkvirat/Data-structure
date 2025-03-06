#include<iostream>
using namespace std;
class hero{
    public:
int health;
char level;

 hero(int health,char level){
    this->health=health;
    this->level=level;

}


hero(hero& temp){
    cout<<"constructor called"<<endl;
    this->health=temp.health;
    this->level=temp.level;



}

void print(){
    cout<<level<<endl;
    cout<<health<<endl;
}

};


int main(){
 hero b(75,'A');
        b.print();



 hero c(b);
    c.print();







}
