#include<bits/stdc++.h>
using namespace std;


//todo --- Step-1 Creating an interface 
class Car {
    public:
        virtual void start() = 0;

        virtual ~Car() {};
};


//todo --- Step-3 Use that interface in derived class
class ElectricCar : public Car {
    public:
        void start() {
            cout << "Start the electric vehicle using a button" << endl;
        }
};


class GasCar : public Car {
    public:
        void start() {
            cout << "Start the gas car using ignition" << endl;
        }
};


class HybridCar : public Car {
    public:
        void start() {
            cout << "Start the hybrid car using any method" << endl;
        }
};


//todo --- Step-3 Use that interface 
int main() {
    ElectricCar ec;
    GasCar gc;
    HybridCar hc;

    Car* c1 = &ec;
    Car* c2 = &gc;
    Car* c3 = &hc;

    c1 -> start();
    c2 -> start();
    c3 -> start();
}