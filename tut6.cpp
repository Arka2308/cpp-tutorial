// In this tutorial , we are going to learn about header files and operators

// Header files like iostream , enhance our code functionality 
// There are mainly two types of header files -
// i. System header files - These header files comes with the system
#include<iostream>
// ii. User header files - These header files are created by the user/programmer
// #include"this.h" --> This will give an error , as this.h file is not present in our directory

using namespace std;

int main(){
    int a = 10, b = 2;
    cout << "Following are the operators in C++ - " << endl;

    // Arithmatic operators 
    cout << "The value of a + b is " << a + b << endl;  // Addition 
    cout << "The value of a - b is " << a - b << endl;  // Substraction
    cout << "The value of a * b is " << a * b << endl;  // Multiplication
    cout << "The value of a / b is " << a / b << endl;  // Division
    cout << "The value of a % b is " << a % b << endl;  // Modulus operator - It returns the remainder when a is divided by b , in this case a % b = 0
    cout << "The value of a++ is " << a++ << endl;  // Division
    cout << "The value of a-- is " << a-- << endl;  // Division
    cout << "The value of ++a is " << ++a << endl;  // Division
    cout << "The value of --a is " << --a << endl;  // Division

    // Assignment operators  -  These operators are used to assign values to operators
    // int a = 3, b = 4;
    // char c = 'b';

    cout << "The value of (!(a==b)) logical operator is : " << (!(a==b)) << endl;  // As a==b is false , so it was going to print false/0, but as the exclamatory sign is there , so it will get reversed and will print true/1

    return 0;
}