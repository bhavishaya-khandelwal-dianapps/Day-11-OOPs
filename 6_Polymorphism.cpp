//todo -- Polymorphism :- is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
//? Poly means multiple 
//? Morph means forms


#include<bits/stdc++.h>
using namespace std;

class Student {
    public: 
        string name;


        Student() {
            cout << "Non-parameterized constructor" << endl;
        }

        Student(string name) {
            this -> name = name;
            cout << "Parameterized constructor" << endl;
        }
};


//? So depending upon the context our object can decide which constructor we need to call 


//* There are 2 types of Polymorphism :- 
//? 1. Compile Time Polymorphism -> In which we get the answer at compile time
//* 1. Most classic example -> Constructor Overloading 
//* 2. Function Overloading is also an example of compile time polymorphism -> when we are defining the same function with different parameters 
//* Compile time polymorphism occur statically 
//* 3. Operator Overloading :- 

class Print {
    public:
        void show(int x) {
            cout << "int : " << x << endl;
        }

        void show(char ch) {
            cout << "char : " << ch << endl;
        }
};
//* Compile time pe hi detect ho jaayega 



//? 2. Run Time Polymorphism -> In which we get answer at run time
//* Basically these are dynamic polymorphism 
//! Examples -> 
//? 1. Function Overriding :- Parent and child conatin the same function with different implementation.
//? The parent class function is said to be overridden. 
//* Overriding is dependent upon inheritance 

//! 2nd Example :- Virtual Functions 
//* A virtual function is a member function that you expect to be redefined in derived classes.

class Parent {
    public:
        void getInfo() {
            cout << "Parent Class" << endl;
        }

        virtual void hello() {
            cout << "Hello from parent" << endl;
        }
};

class Child : public Parent {
    public:
        void getInfo() {
            cout << "Child Class" << endl;
        }

        void hello() {
            cout << "Hello from child" << endl;
        }
};



int main() {
    Student s1("Future");
    Print P1;
    P1.show(23);
    P1.show('*');

    Parent p1;
    p1.getInfo();
    p1.hello();

    Child c1;
    c1.getInfo();
    c1.hello();
}