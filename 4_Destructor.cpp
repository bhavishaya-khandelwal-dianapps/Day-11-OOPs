#include<bits/stdc++.h>
using namespace std;


//todo----- Destructor --------------
//? Opposite of constructor 
//? Main aim is to de-allocate memory 
//? used with tilde(~) sign 
//? It only de-allocate statically allocated memory  
//? Has the same name as of the class 


class Student {
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa) {
            cout << "Hi, I am a constructor" << endl;
            this -> name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        // Student(Student &s) {
        //     this -> name = s.name;
        //     cgpaPtr = new double;
        //     *cgpaPtr = *s.cgpaPtr;
        // }


        ~Student() {
            cout << "Hii, I delete everything" << endl;
            delete cgpaPtr;
        }

        void getInfo() {
            cout << "Name = " << name << endl;
            cout << "CGPA = " << *cgpaPtr << endl;
        }
};


int main() {
    Student s1("Bhavishaya Khandelwal", 9.28);
    s1.getInfo();
}

//* If we don't delete any dynamically allocated memory then there are some problems that we need to face 
//? 1. Memory Leak -> Means we have created so much memory and no one is pointing to these memories, so no one will now use these memory spaces so that's why we need to delete memory