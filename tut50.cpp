#include<iostream>
using namespace std;

int main () {
    int a = 4;
    int* pointerA = &a;
    cout << "The value of a is " << *(pointerA) << endl;
    cout << "The address of a is " << pointerA << endl;


    // new keyword :-
    int* b = new int(50);
    float* c = new float(32.6);
    cout << "The address of b is " << b << " and the value of b is " << *b << endl;
    cout << "The address of c is " << c << " and the value of c is " << *c << endl;

    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl << endl;


    // delete keyword :-
    delete arr;  // As arr holds the address of the array , so deleting the address will also delete the variable , and clear the space allocated for the variable in the memory

    // Now if we print the values of arr , then we will not get perfect answers . In some cases we may get the real value but mostly we would get garbage values
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl << endl;
    

    return 0;
}