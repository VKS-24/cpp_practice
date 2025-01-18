#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Give the input number: " << endl;
    cin >> number;

    int duplicateNumber = number;
    int sum = 0;
    int count=0;

    while (number > 0)
    {
        int lastDigit = number % 10;
        // cout << lastDigit << " ";
        sum = sum + (lastDigit * lastDigit * lastDigit);

        number = number / 10;
        
    }
    // cout << sum << endl;
    if (duplicateNumber == sum)
    {
        cout << "Given number is Armstrong Number" << endl;
    }
    else
    {
        cout << "Given number is not Armstrong Number" << endl;
    }
    return 0;
}