#include<iostream>
using namespace std;
class Vehicle {
public:
    void startEngine(){cout<<"Engine Started"<<endl;}
private:
    void stopEngine(){cout<<"Engine Stopped"<<endl;}
public:
    void tryStopEngine(){stopEngine();}
};
class Car : public Vehicle {
protected:
    string model="Sedan";
public:
    string fuelType;
    int horsepower,seats;
    Car(){
        cout<<"Enter Fuel Type: ";
        cin>>fuelType;
        cout<<"Enter Horsepower: ";
        cin>>horsepower;
        cout<<"Enter Number of Seats: ";
        cin>>seats;
    }
protected:
    void showSpecs(){
        cout<<"Model: "<<model<<endl;
        cout<<"Fuel Type: "<<fuelType<<endl;
        cout<<"Horsepower: "<<horsepower<<" HP"<<endl;
        cout<<"Seats: "<<seats<<endl;
    }
};
class ElectricCar : public Car {
    string batteryCapacity;
public:
    ElectricCar(){
        cout<<"Enter Battery Capacity (in kWh): ";
        cin>>batteryCapacity;
    }
    void display(){
        showSpecs();
        cout<<"Battery Capacity: "<<batteryCapacity<<" kWh"<<endl;
    }
};
int main(){
    Car myCar;
    myCar.startEngine();
    myCar.tryStopEngine();
    cout<<endl;
    ElectricCar tesla;
    tesla.startEngine();
    tesla.display();
    return 0;
}
