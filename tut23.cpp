#include<iostream>
#include<string>
using namespace std; 

class shop {
    private:
        int itemId[100];
        int itemPrice[100];
        int counter = 0;
    public:
        void setItem (void);
        void displayItems (void);
};

void shop :: setItem(void) {
    itemId[counter] = 1000+counter+1;
    cout << "Enter the price of your new item , whose item ID is " << 1000+counter+1 << " : ";
    cin >> itemPrice[counter];
    counter ++;
}
void shop :: displayItems(void) {
    for (int i=0; i<counter; i++) {
        cout << "The price of the item , with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main() {
    char choice;
    shop shop1;
    // shop1.setItem();
    // shop1.setItem();
    // shop1.setItem();
    while(true) {
        shop1.setItem();
        char s;
        cout << "Do you want to continue (Y/N) : ";
        cin >> s;

        if (s == 'Y' || s == 'y') {
            continue;
        } else if (s == 'N' || s == 'n') {
            break;
        } else {
            cout << "Wrong Input . So we are ending this loop";
            break;
        }
    }
    cout << "Do you want to display all your entered items (Y/N) : ";
    cin >> choice;

    if (choice=='Y' || choice=='y') {
        shop1.displayItems();
    } else if (choice=='N' || choice=='n') {
        exit(0);
    }

    return 0;
}