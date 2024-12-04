//? Interfaces :- An interface describe the behaviour or capabilities of a C++ class without committing to a particular implementation of that class.

//* The C++ interfaces are implemented using abstract classes and these abstract classes should not be confused with data seperate from associated data.

//todo Note : A class is made abstract by declaring at least one of its functions as pure virtual function. A pure virtual function is specified by placing "= 0" in its declaration as follows :-

#include<bits/stdc++.h>
using namespace std;

class Box {
    public:
        //? This is a pure virtual function 
        virtual double getVolume() = 0;
    
    private:
        double length;
        double breadth;
        double height;
};


class BoxChild : public Box {
    public:
        void show() {
            cout << "This is a Box Child Class" << endl;
        }
};

//? The purpose of an abstract class (often referred to as ABC) is to provide an appropriate base class from which other classes can inherit. 
//* Abstract classes cannot be used to instantiate objects and serves only as an interface. 
//? Attempting to instantiate an object of an abstract class causes a compilation error. 
//* Thus, if a subclass of an ABC needs to be instantiated, it has to implement each of the virtual functions, which means that it supports the interface declared by the ABC.
//? Failure to override a pure virtual function in a derived class, then attempting to instantiate objects of that class, is a compilation error. 
//* Classes that can be used to instantiate objects are called concrete classes.


//todo --- Step 1 Defining the interface 
class Animal {
    public:
        //? pure virtual function (makes this class an abstract class)
        virtual void speak() = 0; //* Every animal must implement this function 


        virtual ~Animal() {} //* Virtual destructor (good practice for interfaces)
};



//todo --- Step 2 Implement the Interface in Derived Classes 
//* Now, we'll create two classes, Dog and Cat, which implement the speak() method in their own way.
class Dog : public Animal {
    public: 
        void speak() override {
            cout << "Woof! Woof!" << endl;
        }
};

class Cat : public Animal {
    public:
        void speak() override {
            cout << "Meow! Meow!" << endl;
        }
};


//todo --- Step 3 Use the interface 
//* Finally, we can use these classes. We will create pointers of type Animal, which allows us to refer to objects of different derived classes (Dog and Cat) through the same interface.

int main() {

    //? Creating objects of Dog and Cat 
    Dog dog;
    Cat cat;

    dog.speak();

    //? Create pointers of type Animal and assign them to Dog and Cat objects 
    Animal* animal1 = &dog;
    Animal* animal2 = &cat;

    //? Call the speak function using the Animal interface 
    animal1 -> speak();
    animal2 -> speak();
}