/* To check the divisibility of a number by its digits*/

#include <iostream>
using namespace std;

int main()
{
    int number = 43;
    int count = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        cout << lastDigit << " ";
        if (number % lastDigit == 0)
        {
            count++;
        }
        number = number / 10;
    }
    cout << count;
    return 0;
}