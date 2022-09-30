#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter number" << endl;
    cin >> number;
    int counter = 0;
    if (number < 0)
    {
        /* code */
        number = number * -1;
    }
    if (number == 0)
    {
        cout << "You entered 0";
    }

    while (number > 0)
    {
        number /= 10;
        counter++;
        /* code */
    }
    cout << counter;
}