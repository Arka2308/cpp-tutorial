// In this tutorial we are going to learn about arrays and pointers arithmatic

#include<iostream>
using namespace std; 

int main(){
    // Arrays :- 
    int marks[4] = {92, 84, 98, 79};   // This declares a marks array , which has a capacity to contain 4 integer values . 
    int score[] = {18, 19, 20, 15};  // We can initialise the capacity of a variable or cannot , its optional . In this case also , it won't show any error

    cout << marks[0] << endl;  // This will print the first element of our array , as index of an array starts from 0
    cout << marks[1] << endl;  // This will print the second element 
    cout << marks[2] << endl;  // This will print the third element 
    cout << marks[3] << endl;  // This will print the fourth element

    marks[1] = 90;   // We can even change the value of any element in our array afterwards

    return 0;
}