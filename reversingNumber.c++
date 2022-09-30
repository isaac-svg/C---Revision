#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter Number" << endl;
    cin >> number;
    cout << endl;
    int reversedNumber = 0;
    //
    if (number < 0)
    {
        /* this if statement is optional since it only converts negative numbers to positive if you want to do so */
        number = number * -1;
    }
    //
    while (number != 0)
    {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }
    cout << "The reversed number is" << reversedNumber;
}