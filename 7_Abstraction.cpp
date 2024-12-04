//todo--- Abstraction :- Hiding all unnecessary details and showing only the important parts
//? Abstract classes are used to provide a base class from which other classes can be derived.
//? They cannot be instantiated and are meant to be inherited.
//? Abstract classes are typically used to define an interface for derived classes.

#include<bits/stdc++.h>
using namespace std;


//* abstract class -> because it contain pure virtual function 
class Shape {  
    virtual void draw() = 0; //* pure virtual function 
};


class Circle : public Shape {
    public: 
        void draw() {
            cout << "Drawing a circle" << endl;
        }
};

int main() {
    Circle c1;
    c1.draw();
}