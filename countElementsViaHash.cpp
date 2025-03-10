/* From an array, give the number of times a number has occured
for eg. [ 1 3 2 1 3]
1 has occured 2 times
2->1
3->2

input format being length of array, elements of array, number of inputs to be found out and then the inputs
Example:
5
1 3 2 1 3
5
1
4
2
3
12
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "number of elements in array: " << endl;
    cin >> n;
    int arr[n];
    cout << "input elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } // taking input of the array

    // precompute
    int hash[13] = {0}; // considering max element to be 12, can go till 10^6 max or 10^7 if declared globally and no need for ={0}.
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // creating the hash array
    }
    cout << "number of inputs to be taken: " << endl;
    int q; // taking number of inputs to be counted
    cin >> q;
    cout << "The inputs: " << endl;
    while (q--)
    {
        int number;
        cin >> number; // taking input of which number is to be counted
        // fetch
        cout << hash[number] << endl; // using the hash array to display the number of time an element is occured
    }

    return 0;
}