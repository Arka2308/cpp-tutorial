#include<iostream>
using namespace std; 

class base1 {
    protected: 
        int data1;
    public:
        base1(int i) {
            data1 = i;
            cout << "Base1 constructor called" << endl;
        }
        void printDataBase1 (void) {
            cout << "The value of data of base1 is " << data1 << endl;
        }
};

class base2 {
    protected:
        int data2;
    public:
        base2(int i) {
            data2 = i;
            cout << "Base2 constructor called" << endl;
        }
        void printDataBase2 (void) {
            cout << "The value of data of base2 is " << data2 << endl;
        }
};

class derived : public base1, public base2{
    protected:
        int derivedData1;
        int derivedData2;
    public:
        derived (int a, int b, int c, int d) : base1(a), base2(b) {
            derivedData1 = c;
            derivedData2 = d;
            cout << "Derved class constructor called" << endl;
        }
        void printDataDerived (void) {
            cout << "The value of derived 1 data is " << derivedData1 << endl;
            cout << "The value of derived 2 data is " << derivedData2 << endl;
        }
};

int main(){
    derived arka(3, 5, 8, 6);
    arka.printDataBase1();
    arka.printDataBase2();
    arka.printDataDerived();
    return 0;
}