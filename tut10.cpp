// In this tutorial , we are going to learn about loops in C++

#include<iostream>
using namespace std;

int main(){
    /*Loops in C++ : 
        i. For loop
        ii. While loop
        iii. Do-While loop
    */

    // For loop in C++
    cout << "Printing 1 to 10 using for loop" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    // Creating an infinite for loop 
    // for (int i = 1; 2>1; i++) {   // As the condition here '2>1' is always true so this will form an infinite loop
    //     cout << i << endl;
    // }


    cout << endl;


    // While loop is C++
    cout << "Printing 1 to 10 using while loop" << endl;
    int a = 1;

    while (a <= 10) {
        cout << a << endl;
        a++;
    }

    // Creating infinite loop using while loop
    // int b = 1;
    // while(true){
    //     cout << b << endl;
    //     b++;
    // }


    cout << endl;


    // Do While Loop
    cout << "Printing 1 to 10 using do while loop "  << endl;
    int c = 1;

    do {
        cout << c << endl;
        c++;
    } while(c <= 10);
    // The difference between while and do while loop is that in while loop if the condition is false , then the code will never be executed , whereas in do while loop , if the condition is false, then also the code will be executed once 
    
    return 0;



}