#include <iostream>
using namespace std;

int Addition(int, int);
/////////////////////////////////////////////////////////////////////
// Write a program to perform addition of 2 numbers
/////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    cout << "Enter first number";
    cin >> iNo1;

    cout << "Enter second number";
    cin >> iNo2;

    iNo3 = Addition(iNo1, iNo2);
    cout << "Additon is :" << iNo3;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input :         11      10
//  Output :       21
//
/////////////////////////////////////////////////////////////////////