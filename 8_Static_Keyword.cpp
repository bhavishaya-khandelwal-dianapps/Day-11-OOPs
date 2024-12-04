#include<bits/stdc++.h>
using namespace std;

//todo -- Static Keyword :-
//* Static Variables :- Variables declared as static in a function are created and initialised once for the lifetime of the program.  // in Function

//? Static variables in a class are created and initialised once. They are shared by all the objects of the class.  // in Class 


void fun() {
    static int x = 0;
    cout << x << endl;
    x++;
}


class A {
    public:
        static int x;

        void incX() {
            x = x + 1;
        }
};

int main() {
    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;
    cout << obj1.x << endl;
    obj1.incX();
    cout << obj1.x << endl;
    cout << obj2.x << endl;
}