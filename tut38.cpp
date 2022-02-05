#include<iostream>
using namespace std;

class Base {
    int data1;
    public:
        int data2;
        void setData(int a=10, int b=20){
            data1 = a;
            data2 = b;
        };
        int getData1(){
            return data1;
        };
        int getData2(){
            return data2;
        };
};

class Derived : public Base {
    int data3;
    public:
        void process(){
            data3 = data2 * getData1();
        };
        void display(){
            cout << "The value of data1 is " << getData1() << endl;
            cout << "The value of data2 is " << data2 << endl;
            cout << "The value of data3 is " << data3 << endl;
        };
};

int main () {
    Derived o1;
    o1.setData(5, 10);
    o1.process();
    o1.display();  // This will print the values of data1, data2 and data3 
    return 0;
}