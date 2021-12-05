// In this tutorial , we are going to learn about break and continue statement

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            break; // The break keyword stops the running of any loop . In this case when i == 2 , then the loop will break , so it will only print upto 2
        }
    }


    cout << endl;



    cout << "Continue keyword" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 2)
        {
            continue; // The continue keyword will again start the loop from the beginning , so in this case all the numbers will be printed except 2
        }
        cout << i << endl;
    }

    return 0;
}