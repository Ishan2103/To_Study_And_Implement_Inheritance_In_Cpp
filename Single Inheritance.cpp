#include <iostream>
using namespace std;

class Animal {
public:
    string type="Dog";
    void sound(){
        cout<<"Barks\n";
    }
};
class Pet: public Animal {
public:
    string name="tommy";
};
int main(){
    Pet p1;
    cout<<"Type: "<<p1.type<<endl;
    cout<<"Name: "<<p1.name<<endl;
    p1.sound();
    return 0;
}
