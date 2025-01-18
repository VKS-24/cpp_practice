#include <iostream>
using namespace std;

int main()
{
    int number = 4326;
    int reverseNumber = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        // cout << lastDigit << " ";
        number = number / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    cout << "The reverse of the given number is: " << reverseNumber << endl;
    return 0;
}