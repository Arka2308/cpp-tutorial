#include<iostream>
using namespace std;

class Employee {
    public:
        int id;
        int salary;
        Employee () {};
        Employee (int inpId, int inpSalary = 1000) {
            id = inpId;
            salary = inpSalary;
        }
        void printData () {
            cout << "The salary of employee with id " << id << " is " << salary << "." << endl; 
        }
};


/*
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class become private members of the derived class
4. Private members are never inherited
*/


class Programmer : Employee {
    int languageCode;
    public :
        Programmer(){};
        Programmer(int inpId, int inpSalary = 1000) {
            id = inpId;
            salary = inpSalary;
            languageCode = 9;
        }

        void printData () {
            cout << "The salary of programmer with id " << id << " is " << salary << " and language code is " << languageCode << endl; 
        }
};

int main () {
    Employee arka(1), rahul(2);
    arka.printData();
    rahul.printData();
    
    Programmer rudranil(3, 10000);
    rudranil.printData();
    
    return 0;
}