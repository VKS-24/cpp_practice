#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int findLargestElement(int arr[], int n) {
 
    int max = arr[0];
    for (int i = 0; i < n; i++) {
      if (max < arr[i]) {
        max = arr[i];
      }
    }
    return max;
}
int main()
{
    int array[]={0,5,6,5,8};
    cout<<findLargestElement(array, 5)<<endl;
    return 0;
}
