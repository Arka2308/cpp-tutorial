// In this tutorial , we are going to learn about Dynamic initialisation of constructors using objects

#include<iostream>
using namespace std; 

class bankDeposite {
    float principle;
    float rate;
    float years;
    float returnVal;

    public:
        bankDeposite();
        bankDeposite(float p, float r, float y);
        bankDeposite(float p, int r, float y);

        void show () {
            cout << endl << "The principle is " << principle << ". And the return value is " << returnVal << endl;
        }
};

bankDeposite :: bankDeposite(float p, float r, float y) {
    principle = p;
    rate = r;
    years = y;

    returnVal = principle;

    for(int i=1; i<=years; i++) {
        returnVal = returnVal * (1 + r);
    }
}
bankDeposite :: bankDeposite(float p, int r, float y) {
    principle = p;
    rate = r;
    years = y;

    returnVal = principle;

    for(int i=1; i<=years; i++) {
        returnVal = returnVal * (1 + (rate/100));
    }
}

int main(){
    float p, r, y;
    int R;


    cout << "Enter the values of principle, rate and years of investment : " << endl;
    cin >> p >> r >> y;
    bankDeposite o1 = bankDeposite(p, r, y);
    o1.show();
    
    cout << endl << "Enter the values of principle, rate and years of investment : " << endl;
    cin >> p >> R >> y;
    bankDeposite o2 = bankDeposite(p, R, y);
    o2.show();


    
    return 0;
}