#include<iostream>
using namespace std; 
class c2;
class c1 {
    int val;
    friend void exchange (c1 &, c2 &);
    public :
        void input (int value) {
            val = value;
        }
        void print () {
            cout << val << endl;
        }
};
class c2 {
    int val;
    friend void exchange (c1 &, c2 &);
    public :
        void input (int value) {
            val = value;
        }
        void print () {
            cout << val << endl;
        }
};

void exchange (c1 &x, c2 &y) {
    int tmp = x.val;
    x.val = y.val;
    y.val = tmp;
}

int main(){
    c1 oc1;
    oc1.input(5);

    c2 oc2;
    oc2.input(10);

    exchange(oc1, oc2);
    cout << "The value of oc1 after exchange is " << oc1.print;
    cout << "The value of oc2 after exchange is " << oc2.print;
    return 0;
}