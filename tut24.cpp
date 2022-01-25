#include<iostream>
using namespace std; 
 
class Employee {
    int id;
    static int count;  // A static variable refers to a variable , which will not be created for every element made from this Employee class, but instead is only one for all the elements.

    public:
        void setId () { 
            cout<<"Enter your ID : "; 
            cin>>id; 
        }
        void getId () {
            cout << "The ID of this employee is : " << id << endl;
        }
        static void employeeCount () {    // This is a static method , which can be used as an instance of Employee class, and not for any elements of this class
            cout << "The number of employee is " << count << endl;
        }
};

int Employee :: count;

int main() {
    Employee Arka, Rahul, Rudranil, Saptorshi;
    Arka.setId();
    Arka.getId();
    Employee :: employeeCount();  

    Rahul.setId();
    Rahul.getId();
    Employee :: employeeCount();  

    Rudranil.setId();
    Rudranil.getId();
    Employee :: employeeCount();  

    Saptorshi.setId();
    Saptorshi.getId();
    Employee :: employeeCount();  
    
    return 0;
}