#include <iostream>
using namespace std;

int main()
{
    int number = 100;
    while (number < 500)
    {
        if (number % 3 == 0 && number % 5 == 0)
        {
            cout << number << endl;
        }
        number++;
    }

    system("pause>0");
}