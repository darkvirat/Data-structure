#include<iostream>
using namespace std ;
class hero {
    public:
    int age ;
    char* name ;
      
    hero (){
        name = new char[100];
    }

    void print(){
        cout<<name<<endl;
    }
    void setName(char name[]){
        strcpy(this->name ,name);
    }

};
int main(){
    hero b;

 b.age=25;
 b.name = "tribhuwan";
 b.print(); 
     hero c(b);
     c.name[0]='L';
     c.print();


     b.print();

    
    return 0 ;
}