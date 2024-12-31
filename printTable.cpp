/*
To print the table of any integer in reverse.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 10;
    while (k > 0)
    {
        cout << n * k << " ";
        k--;
    }
    cout << endl;
    return 0;
}