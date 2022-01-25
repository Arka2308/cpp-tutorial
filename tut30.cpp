#include<iostream>
using namespace std;

class Complex {
    int a, b;
    public:
        Complex(void);  // Constructor declaration

        void printNumber() {  // Writting a function to print our complex number
            cout << "The number is " << a << "+" << b << "i" << endl;
        }
};

class Complex2 {
    int a, b;
    public:
        Complex2(int a1, int b1);   // Constructor declaration

        void printNumber() {
            cout << "The number is " << a << "+" << b << "i" << endl;
        }
};


// DEFAULT CONSTRUCTORS :-
Complex :: Complex(void) {   // This constructor will set the values of a and b as 0 , as we create an object. This type of constructor , which do not take any parameter /arguments , are known as default constructors 
    a = 0;
    b = 0;
}

// PARAMETERISED CONSTRUCTORS :-
Complex2 :: Complex2(int a1, int b1) {  // The constructors which take parameters are known as parameterised constructors
    a = a1;
    b = b1;
}


int main () {
    Complex o1;   // In object o1, automatically the values of a and b will be set as 0 , which is printed in the below line
    o1.printNumber();

    Complex2 o2(3, 5);  // In object o2, the values of a and b , will be set as 3 and 5 , as we have inserted these values only
    o2.printNumber();
        
    Complex2 o3 = Complex2(4, 8);   // We can set the value of a and b in this manner also
    o3.printNumber();
    return 0;
}