#include<iostream>
using namespace std;

void printName(int i, int n){
    if(i>n) return;
    cout<<"yeet"<<endl;
    printName(i+1,n);

}

int main()
{
    int n=10;
    printName(1, n);
    return 0;
}