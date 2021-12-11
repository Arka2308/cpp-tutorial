// In this tutorial , we are going to learn about functions and function prototype

#include<iostream>
using namespace std; 

// Creating a sum function 
int sum(int a, int b){
    int c = a+b;
    return c;
}


// Function Prototypes  - When we write a function below the main function , then it will not get executed, but to execute it , we can make a small instance of our function at first , which makes the function execute 
int multiply(int a, int b); // This is a function prototype of multiply function , and it will help it to get executed


// The c++ compiler finds the main function first and executes it , other functions are not executed when they are called in the main function
int main(){
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << endl << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2);

    // If we remove the sum function from the first , and place it at the last , we will see an error , which will say that function sum is not declared 

    cout << endl << "The multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2);

    return 0;
}



// Creating another function multiply , below the main function , which will get executed using function prototypes written at first
int multiply(int a, int b){
    int c = a*b;
    return c;
}
