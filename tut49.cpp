#include<iostream>
using namespace std; 
/*
Syntax for initialization list in constructor:
Constructor (argument_list) : initialization_section {
    assignment + other code;
}
*/

int test {
        int a, b;
    public:
        test (int i, int j) : a(i), b(j) {
            cout << "The value of a is " <<  << endl;
            cout << "The value of b is " << b << endl;
        }
};
int main(){
    
    return 0;
}