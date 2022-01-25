#include<iostream>
using namespace std;

class Y;
class X {
    int data;
    friend void sumVal (X, Y);
    public :
        void input (int value) {
            data = value;
        }
};
class Y {
    int data;
    friend void sumVal (X, Y);
    public : 
        void input (int value) {
            data = value;
        }
};

void sumVal (X o1, Y o2) {
    int sum = o1.data + o2.data;
    cout << "The sum is " << sum;
}

int main () {
    X xo1;
    xo1.input(34);

    Y yo2;
    yo2.input(68);

    sumVal(xo1, yo2);
    return 0;
}