//* Encapsulation : Encapsulation is wrapping up of data & member functions in a single unit called class.
//? It is simply binding of data members and member functions.
//? It helps us in data hiding 
//? Basically whatever sensitive information we have, we need to hide it using private access modifier 


#include<bits/stdc++.h>
using namespace std;

class Account {
    private:
        double balance;
        string password;  //* Data Hiding 

    public:
        string actNo;
        string actHolderName;
};