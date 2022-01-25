#include<iostream>
using namespace std;

class Complex {
    int a, b;
    public:
        Complex (int a1, int b1) {
            a = a1;
            b = b1;
        }
        Complex (int ab) {
            a = ab;
            b = ab;
        }
        Complex () {
            a = 0;
            b = 0;
        }
        void printNumber () {
            cout << "the number is " << a << "+" << b << "i" << endl;
        }
};

int main () {
    Complex o1(3, 5); // This will set the values of a and b as 3 and 5 respectively
    o1.printNumber();

    Complex o2(4);  // This will set the values of a and b as 4 and 4 respectively
    o2.printNumber();

    Complex o3; // This will set the values of a and b as 0 and 0 respectively
    o3.printNumber();
    return 0;
}



// Constructor overloading is used to create multiple constructor function with different parameter