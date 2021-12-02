// In this tutorial , we are going to learn about how to take input and return output

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number : "; // '<<' stands for insertion operator
    cin >> num1;                         // '>>' stands for extraction operator

    cout << "Enter the second number : ";
    cin >> num2; // cin is used to take input and insert the values to a variable

    cout << "Enter sum of both the numbers is " << num1 + num2;

    return 0;
}