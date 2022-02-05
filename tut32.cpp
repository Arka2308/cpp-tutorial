// This tutorial is to learn about how to add default parameters in constructors

#include<iostream>
using namespace std;

class Simple {
    int a, b;
    public:
        Simple(int a1, int b1=9) {
            a = a1;
            b = b1;
        }
        void printData () {
            cout << "the values of a and b is " << a << " and " << b << " respectively..." << endl;
        }
};

int main(){
    Simple o1(2, 4);  // This will set the values of a as 2 and b as 4
    o1.printData();

    Simple o2(5); // This will set the value of a as 5. As we didn't specify any value of b , so it will set the value of b as its default value , which is 9
    o2.printData();
    return 0;
}