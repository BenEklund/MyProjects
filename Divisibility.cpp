#include <iostream>

using namespace std;

bool isDivideBy(int number, int a, int b)
{
    double quotientA = (double)number / a; // QUOTIENT A
    double quotientB = (double)number / b; // QUOTIENT B

    int intquotientA = quotientA;
    int intquotientB = quotientB;

    if (quotientA == intquotientA && quotientB == intquotientB)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number; // INTEGER NUMERATOR
    int a;      // INTEGER DIVISOR A
    int b;      // INTEGER DIVISOR B

    cout << "Enter an integer numerator:" << endl; // STATEMENT TAKES INPUT FROM USER TO FILL NUMERATOR AND DIVISOR VARIABLES
    cin >> number;
    cout << endl;
    cout << "Enter an integer divisor:" << endl;
    cin >> a;
    cout << endl;
    cout << "Enter a second integer divisor";
    cout << endl;
    cin >> b;                                      // END OF USER INPUT
    

    bool result = isDivideBy(number, a, b);        // MAIN CALLS FUNCTION TO CHECK INTEGER DIVISIBILITY

    if (result == true)
    {
        cout << "(" << number <<", " << a <<  ", " << b << ")" << " true";
    }
    else
    {
        cout << "(" << number << ", " << a << ", " << b << ")" << " false";
    }
    return 0;
}

