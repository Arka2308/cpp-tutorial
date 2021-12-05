// In this tutorial , we are going to learn about pointers and arithmatics of pointers

#include<iostream>
using namespace std; 

int main(){
    // Pointer is a data type , which holds the address of other data types
    int a = 5;
    int* b = &a;   // When we assign an value into a variable , then it gets stored in our ram in fixed data addresses , and & refers to the address where the variable a is stored

    /*Here, 
        & = address of operator
        * = dereference operator 
    */
 
    // & --> Address of operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of b is " << b << endl;  // Both the values will come same
    
    // * --> De-reference operator
    cout << "The value present at address b is " << *b << endl << endl;




    // Pointer to Pointer 
    int** c = &b;  // This will hold the address of the pointer variable b, which holds the address of the variable a . 

    cout << "The address of variable b is " << &b << endl;   
    cout << "The address of variable b is " << c << endl;
    cout << "The value at address c is " << *c << endl;   // This refers to the value of variable b
    cout << "The value of address value_at(value_at(c)) is " << **c << endl;  // This refers to the value at address 'b' which is the value of address 'c' . Therefore , it refers to the value of variable a

    return 0;
}