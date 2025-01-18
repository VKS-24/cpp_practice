#include <iostream>
using namespace std;

int main()
{
    int number = 1331;
    int duplicateNumber = number;
    int reverseNumber = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        number = number / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    if (reverseNumber == duplicateNumber)
    {
        cout << "Given input is Palindrome" << endl;
    }
    else
    {
        cout << "Given input is not Palindrome" << endl;
    }

    return 0;
}