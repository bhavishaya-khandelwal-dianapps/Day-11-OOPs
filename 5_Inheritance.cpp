#include<bits/stdc++.h>
using namespace std;



//* Inheritance :- When properties & member functions of base class are passed on to the derived class.
//? It is used for code reusability 



//todo --- 1. Single Level Inheritance :-  
class Person {
    public:
        string name;
        int age;

        Person(string name, int age) {
            this -> name = name;
            this -> age = age;
        }
};


class Student : public Person {
    public:
        //* name, age 
        int rollNo;

        //? This is how we call explicitly parent class constructor 
        Student(string name, int age, int rollNo) : Person(name, age) {
            this -> rollNo = rollNo;
        }

        void getInfo() {
            cout << "Name = " << name << endl;
            cout << "Age = " << age << endl;
            cout << "Roll No = " << rollNo << endl;
        }
};



//todo --- 2. Multilevel Inheritance :- 
class GradStudent : public Student {
    public:
        string researchArea;

        GradStudent(string researchArea, string name, int age, int rollNo) : Student(name, age, rollNo) {
            this -> researchArea = researchArea;
        }
};



//todo --- 3. Multiple Inheritance :- When one child class inherits the properties of two parent classes 
class CollegeStudent {
    public:
        string name;
        int rollNo;
};


class CollegeTeacher {
    public:
        string subject;
        double salary;
};

class CollegeTeachingAssistant : public CollegeStudent, public CollegeTeacher {

};


int main() {
    Student s1("Bhavishaya Khandelwal", 22, 19);
    s1.getInfo();
    GradStudent g1("AI & ML", "Dhruv Suthar", 20, 26);
    g1.getInfo();

    CollegeTeachingAssistant TA1;
    TA1.name = "Shraddha"; 
    TA1.subject = "Computer Networks";
    cout << TA1.name << " " << TA1.subject << endl;
}
