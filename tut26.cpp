#include<iostream>
using namespace std; 

class Complex {
    int a, b;
    public: 
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }
        void printNumber(void) {
            cout << "The number is " << a << " + " << b << "i" << endl;
        }
        friend Complex sumComplex(Complex o1, Complex o2);     // This will make this sumComplex function as a friend of the class Complex, and will give access to all the other functions and variables inside the class . And this function will not be allocated like other functions with all the classes made from this class. This can be only accessed by ins name (sumComplex()), and not with its class name, (c1.sumComples())
};

Complex sumComplex(Complex o1, Complex o2) {  // This class does not has any relation with class Complex, because it is not a member of that class, but it just is a friend of that class, and thus it has access to all its other methods and variables
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main(){
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(4, 8);
    c2.printNumber();

    // sum.sumComplex(c1, c2);  // This is a wrong syntax , as sumComplex isn't a part of the class Complex, thus it can't be called as a function of it
    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be called without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class, and it does not matter much
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/