#include<iostream>
using namespace std; 

class Complex;  // Declaring a class Complex

class Calculator {
    public :
        int sum (int a, int b) {
            return a+b;
        }
        int sumRealComplex (Complex, Complex); // Just declaration, defined afterwards
        int sumComComplex (Complex, Complex); // Just declaration, defined afterwards
};

class Complex {
    int a, b;

    // Making both the functions as friend of class Complex individually
    // friend int Calculator :: sumRealComplex (Complex, Complex);  // Making our sumRealComplex as a friend , so that it can access the data of our Complex class
    // friend int Calculator :: sumComComplex (Complex, Complex);  // Making our sumComComplex as a friend , so that it can access the data of our Complex class

    // Making the class Calculator , as a friend of class Complex, so that we don't have to declare functions individually
    friend class Calculator;

    public: 
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }
        void printNumber(void) {
            cout << "The number is " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: sumRealComplex (Complex o1, Complex o2) {
    return o1.a + o2.a;
}
int Calculator :: sumComComplex (Complex o1, Complex o2) {
    return o1.b + o2.b;
}

int main(){
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 8);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int resc = calc.sumComComplex(o1, o2);
    
    cout << "The sum of real numbers of o1 and o2 are " << res << endl;
    cout << "The sum of complex numbers of o1 and o2 are " << resc << endl;
    return 0;
}