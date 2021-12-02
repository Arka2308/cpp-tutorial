#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible to vote";
    }
    else if (age < 1)
    {
        cout << "Wrong input! You are not yet born";
    }
    else
    {
        cout << "You are not eligible to vote";
    }
    return 0;
}