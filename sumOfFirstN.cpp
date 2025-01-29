#include<iostream>
using namespace std;

void sum(int n){
    cout<<n*(n+1)/2<<endl;
}

int main()
{
    int t;
    cin>>t;
    sum(t);
    return 0;
}