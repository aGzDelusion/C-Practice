#include <iostream>
#include <string>
#include <sstream>

//This program demonstrates use of new and delete operators as pointers.
using namespace std;

int main() {
    int x = 0;
    int* pointsToArrayofInt = NULL;
    string s = "";

    cout << "Please enter the number of ages for the new array to hold" << endl;
    getline(cin, s);
    stringstream(s) >> x;
    s.clear();

    pointsToArrayofInt = new int[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Enter age for patient " << i + 1 << ": ";
        getline(cin, s);
        stringstream(s) >> pointsToArrayofInt[i];
        s.clear();
    };
    cout << "Here are the ages as stored in the new array of integers: ";

    for (int i = 0; i<x; i++)
    {
        if (i == (x - 1))
            cout << *(pointsToArrayofInt + i) << "." << endl;
        else
            cout << *(pointsToArrayofInt + i) << ", ";
    };

    delete[] pointsToArrayofInt;

    system("pause");
    return 0;
}
