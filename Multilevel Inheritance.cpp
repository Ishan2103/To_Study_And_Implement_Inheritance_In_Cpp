#include <iostream>
using namespace std;
class LivingBeing{
public:
    void breed(){
        cout<<"French Bulldog"<<endl;
    }
};
class Animal:public LivingBeing {
public:
    void eat(){
        cout<<"Animals eat food"<<endl;
    }
};
class Dog:public Animal {
public:
    void colour(){
        cout<<"black"<<endl;
    }
};
int main(){
    Dog myDog;
    myDog.breed();  
    myDog.eat();                              
    cout<<"Dog colour"<<endl;
    myDog.colour();                              
    return 0;
}
