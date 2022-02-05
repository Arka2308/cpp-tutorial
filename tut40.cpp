#include<iostream>
using namespace std;

class student {
    protected:
        int roll_number;
    public:
        void setRollNumber(int r1) {
            roll_number = r1;
        }
        void getRollNumber(void) {
            cout << "The roll number of student is " << roll_number << endl;
        }
};

class exam : public student {
    protected:
        float maths;
        float physics;
        float chemistry;
    public:
        void setMarks(float m1, float m2, float m3) {
            maths = m1;
            physics = m2;
            chemistry = m3;
        }
        void getMarks(void) {
            cout << "The marks of maths is " << maths << endl;
            cout << "The marks of physics is " << physics << endl;
            cout << "The marks of chemistry is " << chemistry << endl;
        }
};

class result : public exam {
    protected:
        float percentage;
    public:
        void display(void) {
            percentage = (maths + physics + chemistry) / 3;
            getRollNumber();
            getMarks();
            cout << "The percentage of marks got is " << percentage << endl;
        }
};

int main() {
    result arka;
    arka.setRollNumber(411);
    arka.setMarks(94, 96, 90);
    arka.display();
    return 0;
}