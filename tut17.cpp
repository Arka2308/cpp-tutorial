// In this tutorial , we are going to learn about Inline functions , default arguments and Constant arguments 

#include <iostream>
using namespace std;

float moneyRecieved (float principle, float amount = 4, float time = 1) {   // This will set the default values of arguments amount and time as 4 and 1 respectively , and in we don't enter any values for these arguments, then it will take these values as default , but we can change these default values when we are calling the function , by add values in place of these arguments

return (principle*amount*time)/100 + principle;
}



int main () {
    // Default arguments

    float principle = 100000;
    cout << "If you have " << principle << " Rs in your bank account , then you will get Rs " << moneyRecieved(principle) << " after 1 year..." << endl; // These will take the default values of amount and time . 
    cout << "For VIP : If you have " << principle << " Rs in your bank account , then you will get Rs " << moneyRecieved(principle, 10) << " after 1 year..." << endl; // This will take the default value of time .
    cout << "For VIP : If you have " << principle << " Rs in your band account , and you want to get your money back after two years , then you will get Rs " << moneyRecieved(principle, 10, 2) << " after 2 years..." << endl; // This will take no default values in the function , and take all given values

    return 0;
}