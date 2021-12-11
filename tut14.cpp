// In this tutorial , we are going to learn about struct, union and enums

#include<iostream>
using namespace std;

// A struct is like an array , but the only difference is that an array holds values of similar datatype , but an struct can hold values of different data types too
// We can create multiple employee struct and add values too it
struct employee {
    int eId;
    char favChar;
    float salary;
};

typedef struct marks {
    float english;
    float math;
    float science;
    float computer;
} score;  // Adding 'typedef' keyword at first , and adding 'score' at the end refers that we can even create an instance 


// Union 
union money   // An union is similar to struct , but here we can only pick any one among the following options and add values to it 
{
    float rice;
    float wheat;
    float maize;
};





int main () {
    // // Creating an struct employee named 'arka' and adding values to it
    // struct employee arka;
    // score rahul; // Here instead of writting 'struct marks' , we can write 'score' , as we have wrote typedef and score while constructing the struct

    // arka.eId = 001;
    // arka.favChar = 'a';
    // arka.salary = 50000;

    // rahul.english = 92;
    // rahul.math = 95;
    // rahul.science = 89.5;
    // rahul.computer = 98;
    // // Printing the values 
    // cout << "The of eId employee arka is : " << arka.eId << endl;
    // cout << "The of favChar employee arka is : " << arka.favChar << endl;
    // cout << "The of salary employee arka is : " << arka.salary << endl;



    // union 
    // union money m1;
    // m1.rice = 120;  // Here , we entered the value of rice in our union money m1
    // m1.wheat = 150; // Now in union m1, the value of rice is replaced by value of wheat which is 150
    // m1.maize = 270; // Now again , value of wheat is replaced by value of maize 
    // cout << m1.rice << endl;
    // cout << m1.wheat << endl;
    // cout << m1.maize << endl;  // All the values of the three cout statements , will be printed as 270 , as it is the last updated union option 
    
    return 0;
}