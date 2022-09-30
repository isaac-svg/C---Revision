#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter number ";
    cin >> number;
    int sum = 0;
    if (number < 0)
    {
        /* code */
        number = number * -1;
    }

    while (number > 0)
    {
        int remainderHolder = number % 10;
        sum += remainderHolder;
        number /= 10;
        /* code */
    }
    cout << "The sum is " << sum << endl;
}