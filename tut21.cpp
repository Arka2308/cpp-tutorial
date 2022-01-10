// In this tutorial we are going to learn about Classes, private and public access modifiers

#include<iostream>
using namespace std;

// As we know , that we can use structures to save values of different data types . 
// But there is one problem , with using structures , that they cannot hold functions in them . 
// So, to hold functions , we can make use of classes in C++

class Employee {  // Declaring a new class named "Employee"
    private :   // This private block will contain all the variables , which are private , and no one can easily access or modify it from the main function , one can modify and access it , only by using any function present inside the class
        int a, b, c;
    public :    // The public block contains all the variable , that can be easily accessible from the main funciton , and also from functions inside the class
        int d, e;
    void setData (int a1, int b1, int c1);
    void printData () {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};


// We can even write a function present inside a class from outside of the class
void Employee :: setData (int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main () {
    Employee Arka;
    Arka.setData(5, 7, 10);   // This will set the values of a, b and c as 5, 7 and 10
    Arka.d = 14; // This will set the values of d as 14
    Arka.e = 19; // This will set the values of e as 19
    // Arka.a = 3; // This will give an error , as the variable 'a' is a private variable , which is not accessible , from the main function , whereas it can only be accessed , using any function present inside the class
    Arka.printData();  // This will print all the values of a, b, c, d and e
    
    return 0;
}