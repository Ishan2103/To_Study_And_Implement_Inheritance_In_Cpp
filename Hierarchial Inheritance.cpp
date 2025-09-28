#include <iostream>
using namespace std;
class Gadget {
public:
    void powerOn(){
        cout<<"Powering on the device\n";
    }
};
class Smartphone:public Gadget{
public:
    void callFeature(){
        cout<<"Smartphone can make calls\n";
    }
};
class Laptop:public Gadget{
public:
    void codeFeature(){
        cout<<"Laptop can run C++ programs\n";
    }
};
class Smartwatch : public Gadget {
public:
    void healthFeature() {
        cout<<"Smartwatch tracks heart rate\n";
    }
};
int main() {
    Smartphone phone;
    Laptop computer;
    Smartwatch watch;
    cout << "Smartphone:\n";
    phone.powerOn();
    phone.callFeature();
    cout << "\nLaptop:\n";
    computer.powerOn();
    computer.codeFeature();
    cout << "\nmartwatch:\n";
    watch.powerOn();
    watch.healthFeature();
    return 0;
}
