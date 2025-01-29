#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int number1 = 9;
    int number2 = 12;
    int hcf = 0;
    for (int i = 1; i < number1; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << hcf << endl;
    /*###################################################################################*/
    // Alternate faster method
    for (int i = min(number1, number2); i >= 1; i--)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
    /*########################################################################################*/
    // euclidean method
    int a = number1;
    int b = number2;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
            b = b % a;
    }
    if (a == 0)
    {
        cout << b<<endl;
    }
    cout << a<<endl;

    return 0;
}