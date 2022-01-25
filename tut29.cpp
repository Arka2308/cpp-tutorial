#include<iostream>
using namespace std; 

class complex {
    int a, b;
    public :
        // Constructors
        // A constructors is a special function , which has the same name as the class, and it runs automatically , when an object is created.
        // In this case we can easily insert our values for int a and b while declaring an object only
        complex(int a1, int b1);
};

complex :: complex(int a1, int b1) {
    a = a1;
    b = b1;

    cout << "Your number is " << a << "+" << b << "i" << endl;
}



int main(){
    complex o1(4, 5);
    complex o2(3, 7);
    
    return 0;
}



// Properties of Constructors -->
// 1. It should be declared in the public section of the class 
// 2. They are automatically invoked whenever the object is created 
// 3. Do not have return types , and they cannot return values
// 4. It can have default arguments
// 5. We cannot refer to their address