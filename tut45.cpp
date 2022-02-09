#include<iostream>
using namespace std;

class student {
    protected:
        int roll_number;
    public:
        void setRollNumber (int rnum) {
            roll_number = rnum;
        }
        void printRollNumber (void) {
            cout << "Your roll number is " << roll_number << endl;
        }
};
class test : virtual public student {
    protected:
        int physics_marks;
        int chemistry_marks;
        int maths_marks;
    public:
        void setTestResult (int m1, int m2, int m3) {
            physics_marks = m1;
            chemistry_marks = m2;
            maths_marks = m3;
        }
        void printTestResult (void) {
            cout << "Your test marks are as follows : " << endl << "Physics : " << physics_marks << endl << "Chemistry : " << chemistry_marks << endl << "Maths : " << maths_marks << endl;
        }
};
class sports : virtual public student {
    protected:
        int sports_score;
    public:
        void setSportsScore (int score) {
            sports_score = score;
        }
        void printSportsScore (void) {
            cout << "Your sports score is " << sports_score << endl;
        }
};

class result : public test, public sports {
    public:
        void final_result (void) {
            printRollNumber();
            printTestResult();
            printSportsScore();
            cout << "Your total score is " << (physics_marks + chemistry_marks + maths_marks + sports_score) << " and your percentage is " << (physics_marks + chemistry_marks + maths_marks + sports_score)/4 << endl;
        }
};


int main() {
    result arka;
    arka.setRollNumber(32);
    arka.setTestResult(94, 89, 91);
    arka.setSportsScore(79);
    arka.final_result();
    return 0;
}