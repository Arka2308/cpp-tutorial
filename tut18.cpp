// In this tutorial , we are going to learn about recursions and recursive functions 

#include <iostream>
using namespace std;

int factorial (int a) {
    int temp = a; 
    for (int i=(a-1); i>=1; i--) {
        temp = temp * i;
    }
    return temp;
}

int main () {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << endl << "The factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}