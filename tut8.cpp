#include <iostream>
#include <iomanip> // This is another header file which is used to set width which is a manupulator

using namespace std;

int main()
{
    // We know that we can change the values of any variable in C++ after it is once declared
    // int a = 3;
    // cout << "The value of a was " << a;
    // a = 5;
    // cout << "The value of a is " << a;

    // Constants in C++ -  We can use the 'const' keyword before declaring any variable , to make the variable constant , which cannot be changed afterwards
    // const int b = 2;
    // cout << "The value of b is " << b;
    // b = 3;  // This will give an error as we have declared our b variable as constant , thus we cannot change it

    // Manipulators
    // int a = 25, b = 125, c = 1025;

    // cout << "The value of 'a' without setw is " << a << endl;
    // cout << "The value of 'b' without setw is " << b << endl;
    // cout << "The value of 'c' without setw is " << c << endl << endl;

    // cout << "The value of 'a' is " << setw(4) << a << endl;
    // cout << "The value of 'b' is " << setw(4) << b << endl;
    // cout << "The value of 'c' is " << setw(4) << c << endl << endl;

    // Operator Precedence

    return 0;
}