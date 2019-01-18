/****************************
Practice Problems
****************************/


/*********************************
 1. Fibonacci series with For-Loop && Stringstream
 COMSCI-110 & 165
*********************************/

#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    int a = 0, b = 0, sum = 0, numTerms = 0;
    const int MIN = 3;

    string s1 = "";

    cout << "Enter number of terms" << endl;
        getline(cin, s1);
        std::stringstream(s1) >> numTerms;
        s1.clear();
    
    cout << "Enter first term, followed by the second term" << endl;
        getline(cin, s1);
        std::stringstream(s1) >> a >> b;
        s1.clear();
        cout << endl;
    
    cout << a << endl << b << endl;

        for (int i = 0; i <= (numTerms - MIN); i++)
        {
            sum = a + b;

            a = b;

            b = sum;

            cout << sum << endl;

        }

    system("pause");
    return 0;
}

/*********************************
2. 
*********************************/