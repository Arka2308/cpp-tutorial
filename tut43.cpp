#include<iostream>
using namespace std; 

class greet1 {
    public:
        void greet(void) {
            cout << "Good Morning";
        }
};

class greet2 {
    public:
        void greet(void) {
            cout << "Good Afternoon";
        }
};

class greet3 {
    public:
        void greet(void) {
            cout << "Good Night";
        }
};

class derived : public greet1, public greet2, public greet3 {
    // If we create a greet function , then we have a problem that what greeting will the derived class print
    public:
        void greet(void) {
            greet1 :: greet();
        }
};

int main(){  
    derived o1;
    o1.greet(); // There is a problem that all the classes which are being inherited by more than one class, which contains multiple greet function , so which one will the derived class run. This is known as ambiguity
    return 0;
}