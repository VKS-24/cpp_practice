#include <iostream>
using namespace std;

void passByValue(int num)
{
    num += 1;
    cout << "Changed value in the function: " << num << " at " << &num << endl;
}

void passByRef(int &num)
{
    num += 2;
    cout << "Changed value in the function : " << num << " at " << &num << endl;
}

void sum(int a, int &b)
{
    cout << "Inside function : " << a << " " << &a << endl;
    cout << "Inside function : " << b << " " << &b << endl;
    // return 3;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    passByValue(num1);
    cout << "Inside Main : " << num1 << " " << &num1 << endl;
    cout << "********************\n";
    passByRef(num2);
    cout << "Inside Main : " << num2 << " " << &num2 << endl;

    return 0;
}