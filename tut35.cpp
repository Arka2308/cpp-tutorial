// In this tutorial , we are going to learn about destructors in C++

#include<iostream>
using namespace std;

int count = 0;  // Creating a global variable named count , which is equal to 0
class number {
    public :
        number () {
            count++;
            cout << "constructor is being called for object number " << count << endl;
        }
        ~number () {     // '~' sign is used for declaring destructors . 
            cout << "destructor is being called for object number " << count << endl;
            count--;
        }

        // Constructors are automatically called , when an object of that class is created . Similarly , destructors are also called , when an object of that class is destroyed / removed
        // An object of any class is destroyed when the compiler finds that the object is of no need i.e. the compiler gets destroyed when the compiler reaches the end of that scope in which the object is present , which means that the compiler has completed executing all the lines of code present in that scope
};

int main () {
    cout << "We are inside our main function" << endl;
    cout << "We are going to create an object n1 of our number class" << endl;
    number n1;

    {
        cout << "Entering this block" << endl;
        cout << "Creating more two objects n2 and n3" << endl;
        number n2, n3;  // This objects will get destroyed as we enter back to our main function from this block / scope, as these objects are of this local scope
        cout << "Exiting the block" << endl;
    }

    cout << "Re-entering our main function" << endl;
    
    return 0;
}