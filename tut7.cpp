// In this tutorial , we are going to learn about reference variable and typecasting

#include<iostream>

using namespace std;

int c = 50;  // This c variable is my global variable , which can be used everywhere

int main () {
    // int a, b, c;

    // cout << "Enter the value of a : ";
    // cin >> a;
    // cout << "\nEnter the value of b : ";
    // cin >> b;

    // c = a + b;   // This c variable is my local variable of this function , which can only be executed inside this main() function
    // cout << "\nThe sum of a + b is " << c << endl;

    // // As we are inside the main() function , so we cannot print the value of our global c variable , it will always print the value of our local c variable . 
    // // To print our global c variable , inside our main() function , we need to add our scope resolution operator (::) before our c variable , to make it print the value of global c variable 

    // cout << "My global c variable is " << ::c; // This will print 50




    float d = 34.5;
    // if one writes 34.5 directly , it considers it as a double value, but if we want it to be made a float integer , we need to add a 'f/F' after the value i.e. 34.5f
    long double e = 34.5;  // Similarly to declare a long value , we use l/L after the value i.e. 34.5l

    cout << "The value of d is " << d << "." << endl << "The value of e is " << e << ".";

    cout << "The size of 34.5 is " << sizeof(34.5) << endl;  // As nothing is specified , so it considers the value as float and gives size as 8
    cout << "The size of 34.5 is " << sizeof(34.5f) << endl;
    cout << "The size of 34.5 is " << sizeof(34.5F) << endl;
    cout << "The size of 34.5 is " << sizeof(34.5l) << endl;
    cout << "The size of 34.5 is " << sizeof(34.5L) << endl << endl;


    // Reference variables  -  These are variables which point out the same value of another main variable , but are different variables
    cout << "Reference variables" << endl; 
    float x = 450;
    float & y = x; // The variable y will contain the same value as x i.e. 450 . 'y' is so called as the reference variable of x
    cout << x << endl;
    cout << y << endl << endl;



    // Type casting  -  Type casting refers to changing a type of a variable to another like from 'int' to 'float'
    cout << "Type casting" << endl;
    float a = 45.32;
    cout << a << endl;  // This will print a as it is 45.32
    cout << (int)a << endl;  // This will print a by converting its type to int , and will print 45
    cout << int(a) << endl;  // This will print a by converting its type to int , and will print 45
    // Both the above lines are same , whether it is (int)a or int(a) , both represents the same line
    

    return 0;
}