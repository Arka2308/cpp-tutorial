#include<iostream>
using namespace std; 

class number {
    int a;
    public:
        number(){  // Default constructor
            a = 0;
        }
        number (int num) {
            a = num;
        }
        number (number &o1) {
            cout << "Copy constructor called !!!" << endl;
            a = o1.a;
        }

        void display () {
            cout << "the value of your number is " << a << endl;
        }
};

int main(){
    number x, y, z(25);

    x.display();
    y.display();
    z.display();

    number z2;  // z2 is an object , which will completely resemble the object z , by using our copy constructor
    z2 = number(z);  // This will make the value of z2 similar to the object z
    z2.display();
    return 0;
}