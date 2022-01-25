#include<iostream>
#include<string>
using namespace std; 

class binary {
    string s;  // If we don't specify variables inside any block , then they are by default put inside a private block
    void chk_bin(void);

    public : 
        void read(void);
        void ones(void);
        void display(void);
};

void binary :: read(void) {
    cout << "Enter a binary number : "; 
    cin >> s;
}

void binary :: chk_bin(void) {
    for (int i=0; i<s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

void binary :: ones(void) {
    chk_bin();  // Inserting chk_bin() function inside this function , which will check whether the given binary number is a valid binary number or not
    for (int i=0; i<s.length(); i++) {
        if (s.at(i)=='0') {
            s.at(i)='1';
        }
        else {
            s.at(i)='0';
        }
    }
}

void binary :: display(void) {
    cout << "Your binary number is ";
    for (int i=0; i<s.length(); i++) {
        cout << s.at(i);
    }
    cout << endl;
}

int main(){
    binary a;
    a.read();
    // a.chk_bin();  // We can hide this function from users , by putting this function in another function . Here we are inserting this function in ones() function, and also keeping this function under private block
    a.display();
    a.ones();
    a.display();
    
    return 0;
}