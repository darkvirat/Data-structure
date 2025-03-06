
/*For access the private date member */


#include<iostream>
using namespace std ;
class hero {
    private:
    int age ;
     public:
    string name ;


    int getage(){
        return age ;
    }
    void setage(int a){
        age = a;
    }
     int getname(){
        return age ;
    }
    void setname(string a){
        name = a;
    }



};
int main(){
    /*static allocation*/
    hero a;       
    a.setage(5);     
  a.name = "tribhuwan singh";
    cout<<" name  is "<<a.name<<endl;
    cout<<"age is "<<a.getage()<<endl; 

    /*dynamic allocation*/
    hero *b = new hero;
    b->setage(5);
    b->setname("'virat'");
      cout<<" name  is "<< (*b).name<<endl;
    cout<<"age is "<<(*b).getage()<<endl;



     cout<<" name  is "<< b->name<<endl;
    cout<<"age is "<<b->getage()<<endl;

    
    return 0 ;
}