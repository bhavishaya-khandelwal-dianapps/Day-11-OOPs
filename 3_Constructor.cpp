//* Constructor : Special method invoked automatically at time of object creation. 
//? Used for Initialisation 
//? Same name as class
//? Constructor doesn't have a return type 
//? Only called once (automatically), at object creation 
//? Memory allocation happens when constructor is called 
//? Always create constructor in public access modifier 


#include<bits/stdc++.h>
using namespace std;

class Teacher {
    //* properties or attributes  
    private: 
        double salary;


    //* methods or member functions
    public:
        string name;
        string dept;
        string subject;

        //? Non-Parameterized Constructor :- 
        Teacher() {
            cout << "This is a Non-Parameterized Constructor" << endl;
        }

        //? Parameterized Constructor :- 
        Teacher(string name, string dept, string subject, double salary) {
            cout << "Constructor is automatically called" << endl;
            this -> name = name;
            this -> dept = dept;
            this -> subject = subject;
            this -> salary = salary;
            //? Left name -> Object's name 
            //? Right name -> parameter
            //* So to show object's property we use this pointer 
        }



        //? Copy Constructor :- 
        Teacher(Teacher &t) {  //? Pass By refernce
            cout << "I am a custom copy constructor" << endl;
            this -> name = t.name;
            this -> dept = t.dept;
            this -> subject = t.subject;
            this -> salary = t.salary;
        }


        void changeDept(string newDept) {
            dept = newDept;
        }

        void setSalary(double salary) {
            this -> salary = salary;
        }

        double getSalary() {
            return salary;
        }

        void getInfo() {
            cout << name << endl;
            cout << subject  << endl;
            cout << dept << endl;
            cout << salary << endl;
        }
};


//? Class does not take any space in memory, but whenever we create object from class then these objects are going to take space from memory.


//* "this" pointer :- "this" is a special pointer in C++ that points to the current object.
//? Syntax :- this -> prop is same as *(this).prop


//* There are 3 types of constructors :- 
//? 1. Non-Parameterized Constructor :- 
//? 2. Parameterized Constructor :- 
//? 3. Copy Constructor :- Special Constrcutor (default) used to copy properties of one object into another.

 






//* Shallow Copy and Deep Copy :- 
//? A shallow copy of an object copies all of the member values from one object to another. 

//? A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the member point to. 


//* Issue arises when we do dynamic memory allocation in shallo copy


class Student {
    public:
        string name;
        double cgpa;
        double *cgpaPtr;


        
        Student(string name, double cgpa) {
            this -> name = name;
            this -> cgpa = cgpa;
            //* Memory Allocation
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        //? Shallow copy constructor 
        // Student(Student &s) {
        //     this -> name = s.name;
        //     this -> cgpaPtr = s.cgpaPtr;
        // }

        //? Deep Copy Constructor 
        Student(Student &s) {
            this -> name = s.name;
            cgpaPtr = new double;
            *cgpaPtr = *s.cgpaPtr;
        }

        void getInfo() {
            cout << "Name = " << name << endl;
            cout << "CGPA = " << *cgpaPtr << endl;
        }
};

int main() {
    // Teacher t1("Bhavishaya Khandelwal", "CSE", "C++", 25000.00);
    // Teacher t2(t1);  //? Automatically default copy constructor called ho gaya 
    // t2.getInfo();

    Student s1("Bhavishaya Khandelwal", 8.88);
    Student s2(s1);
    *(s2.cgpaPtr) = 9.28;
    s2.name = "Sanskriti Khandelwal";
    s1.getInfo();
    s2.getInfo();
}