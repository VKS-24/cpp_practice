#include <iostream>
using namespace std;

int main()
{
    int number = 6;
    int count = 0;
    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
            // cout << i << " ";
            if (number / i != i)
            {
                // cout << number / i << endl;
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "isPrime" << endl;
    }
    else
    {
        cout << "notPrime" << endl;
    }
    cout << endl;
    return 0;
}