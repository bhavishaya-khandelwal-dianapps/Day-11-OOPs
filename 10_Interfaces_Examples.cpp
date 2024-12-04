// #include<bits/stdc++.h>
// using namespace std;


// //todo --- Step-1  Creating a interface 
// class Shape {
//     public:
//         virtual void draw() = 0;

//         virtual ~Shape() {}
// };


// //todo --- Step-2 Implement the interface in Derived class 
// class Circle : public Shape {
//     public:
//         void draw() override {
//             cout << "Drawing a circle" << endl;
//         }
// };

// class Rectangle : public Shape {
//     public:
//         void draw() {
//             cout << "Drawing a rectangle" << endl;
//         }
// };


// //todo --- Step-3 Use the interface

// int main() {
//     Circle circle;
//     Rectangle rectangle;


//     Shape* shape1 = &circle;
//     Shape* shape2 = &rectangle;

//     shape1 -> draw();
//     shape2 -> draw();
// }












// #include<bits/stdc++.h>
// using namespace std;


// //? Interface (abstract class with pure virtual function)
// class Car {
//     public:
//         //? Pure virtual function (makes this class an abstract class) 
//         virtual void start() = 0;  //* Every car must implement this function 

//         virtual ~Car() {}
// };


// //? Implementing the Interface in Derived Classes 
// class ElectricCar : public Car {
//     public:
//         void start() override {
//             cout << "Starting electric car with a push of a button!" << endl;
//         }
// };


// class GasCar : public Car {
//     public: 
//         void start() override {
//             cout << "Starting gas car with a key turn and ignition" << endl;
//         }
// };


// class HybridCar : public Car {
//     public: 
//         void start() override {
//             cout << "Starting hybrid car with both electric and gas engine!" << endl;
//         }
// };


// int main() {
//     ElectricCar electricCar;
//     GasCar gasCar;
//     HybridCar hybridCar;


//     Car* car1 = &electricCar;
//     Car* car2 = &gasCar;
//     Car* car3 = &hybridCar;

//     car1 -> start();
//     car2 -> start();
//     car3 -> start();
// }





#include<bits/stdc++.h>
using namespace std;


//todo --- Step-1 Creating a interface 
class Shape {
    public:
        virtual void shape() = 0;

        virtual ~Shape() {};
};


//todo --- Step-2 Implement the interface in the derived class
class Circle : public Shape {
    public:
        void shape() {
            cout << "Drawing a circle" << endl;
        }
};


class Rectangle : public Shape {
    public:
        void shape() {
            cout << "Drawing a rectangle" << endl;
        }
};


//todo --- Step-3 Use the interface 
int main() {
    Circle circle;
    Rectangle rectangle;

    Shape* s1 = &circle;
    Shape* s2 = &rectangle;

    s1 -> shape();
    s2 -> shape();
}