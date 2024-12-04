#include<bits/stdc++.h>
using namespace std;

//* OOPs :- As the name suggests uses objects in programming. Object oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. 
//? The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function 
//? Organization level pe hamaara code bahut achha ban jaata hai using OOPs


//todo ------ Basic Building Blocks of OOPS---------
//* Classes and Objects : 
//? Object are entities in the real world, an instance of a class.
//? Class is like a blueprint of these entities, the building block of C++ that leads to OOP is a class. It is a user-defined data type, which holds it own data members and member functions.
 

class Teacher {
    //* properties or attributes  
    private: 
        double salary;


    //* methods or member functions
    public:
        string name;
        string dept;
        string subject;

        Teacher(string name, string dept, string subject, double salary) {
            this -> name = name;
            this -> dept = dept;
            this -> subject = subject;
            this -> salary = salary;
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

        // void showInfo() {
        //     cout << "Teacher Name = " << name << endl;
        //     cout << "Teacher Dept. = " << dept << endl;
        //     cout << "Teacher Subject = " << subject << endl;
        //     cout << "Teacher Salary = " << salary << endl;
        // }
};

//? So instead of creating a lot of variables in our code we use concept of class(blueprint) and then create it's objects


//* Access Modifiers : 
//? private : data & methods accessible inside class
//? public : data and methods accessible to everyone 
//? protected : data and methods accessible inside class and to its derived class


class Student {
    private:
        string name;
        int rollNo;
        int age;
};

int main() {
    Teacher t1("Bhavishaya Khandelwal", "CSE", "C++", 25000.00);
    cout << t1.getSalary() << endl;
    t1.setSalary(34524.43);
    cout << t1.getSalary() << endl;
}