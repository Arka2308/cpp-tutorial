#include<iostream>
using namespace std; 
// In simple inheritance , we inherit a derived class from a base class
// In multilevel inheritance , we inherit a derived class from a base class , and again we inherit another derived class from the first derived class
// In this file , 
//          we are going to give an example of multiple inheritance, where we create one derived class from two or more base classes

class base1 {
    protected:
        int base1Int;
    public:
        void set_base1Int (int a) {
            base1Int = a;
        }
};
class base2 {
    protected:
        int base2Int;
    public:
        void set_base2Int (int a) {
            base2Int = a;
        }
};
class base3 {
    protected:
        int base3Int;
    public:
        void set_base3Int (int a) {
            base3Int = a;
        }
};

class derived : public base1, public base2, public base3 {
    public:
        void show () {
            cout << "The value of base1 is " << base1Int << endl;
            cout << "The value of base2 is " << base2Int << endl;
            cout << "The value of base3 is " << base3Int << endl;
            cout << "The sum of these values is " << (base1Int + base2Int + base3Int) << endl;
        }
};


int main(){
    derived arka;
    arka.set_base1Int(13);
    arka.set_base2Int(20);
    arka.set_base3Int(35);
    arka.show();
    return 0;
}