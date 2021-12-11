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
    cout << marks[3] << endl << endl;  // This will print the fourth element

    marks[1] = 90;   // We can even change the value of any element in our array afterwards

    cout << "Printing all the elements using loops"; 
    for (int i=0; i<4; i++) {
        cout << marks[i] << endl;
    }


    // Pointers and arrays 
    // In case of arrays , then name itself prints the address of the first element of that array 
    // So by de-referencing(*) the name of the array, we will get our first element 
    cout << endl << "Pointers and arrays :- " << endl;

    int* p = score; // This holds the address of the first element of this array
    cout << "The address of score[0] is " << (score) << ". And the value of it is " << *(score) << endl;
    cout << "The address of score[0] is " << (score+1) << ". And the value of it is " << *(score+1) << endl;
    cout << "The address of score[0] is " << (score+2) << ". And the value of it is " << *(score+2) << endl;
    cout << "The address of score[0] is " << (score+3) << ". And the value of it is " << *(score+3) << endl;
    // This will print all the values present in the array score[]

    return 0;
}