#include<iostream>
using namespace std; 

// Function to find the volume of a cube 
float volume (float s) {
    return (s*s*s);
}

// Function to find the volume of a cuboid 
float volume (float l, float b, float h) {
    return (l*b*h);
}

// Function to find the volume of a cylinder 
float volume (float r, float h) {
    return (3.14 * r * r * h);
}

int main(){ 
    cout << "The volume of a cube with side 5 cm is " << volume(5) << endl;
    cout << "The volume of a cuboid with length 5cm , breadth 4cm and height 2cm is " << volume(5, 4, 2) << endl;
    cout << "The volume of a cylinder with radius 3cm, and height 10cm is " << volume(3, 10) << endl;
    return 0;
}

// So finally , we can conclude that , we can easily create multiple functions with same name but different parameters , and doing this is known as function overloading .