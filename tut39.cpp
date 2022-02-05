#include<iostream>
using namespace std; 

class base {
    private:
        int a;  // 'a' variable is a private variable , which means that it will not be inherited in any of its derived class
    protected:  
        int b;  // protected variable can be inherited easily , but isn't accessible from anywhere else inside the code
        void setData (int inpA, int inpB) {
            a = inpA;
            b = inpB;
        }
};

// A private variable is not inherited , whereas a public variable is easily inherited , but can be changed by any viewer . So if we want to make a variable , which is not accessible by viewers from anywhere in the code, but can be inherited easily , then we use protected variable 

class derived : protected base {
    public:
        void setData (int inpB) {
            b = inpB;
        }
        void display () {
            cout << "The value of b is " << b << endl;
        }
};

int main(){
    derived o1;
    o1.setData();
    o1.display();
    return 0;
}