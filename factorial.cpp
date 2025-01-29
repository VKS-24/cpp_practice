#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main()
{
    int t;
    cin>>t;
    cout<<factorial(t)<<endl;
    return 0;
}