#include<iostream>
using namespace std;

int sum (int a, int b) {   // this is my int function , which is going to return the value of sum of two integer values
    int c = a + b;
    return c;
}

// This will not swap a and b , as the changes that are done in a and b are temporary , which will not at all change the actual values
void swap (int a, int b) {
    int temp = a;
    a = b; 
    b = temp;
}

// Call by reference by using pointer . As this takes input of the address of the values , and thus it gets changed
void swapPointer (int* a, int* b) { 
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference by using reference variable . As it takes input of the reference value of the actual value , and if the reference value gets changes , then the actual value also gets changes 
void swapRefPointer (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {
    int a = 4, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << "." << endl << endl;
    // swap(a, b); // This will not swap the two numbers values
    // swapPointer(&a, &b);   // This will swap the two number values 
    swapRefPointer(a, b); // This will also swap the two number values
    
    cout << "The value of a is " << a << " and the value of b is " << b << "." << endl;

    return 0; 
}