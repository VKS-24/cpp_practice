#include <iostream>
using namespace std;

int i = 1;
void printNos(int i,int n)
{
    if(i>n) return;
   cout<<i<<endl;

   
   printNos(i+1,n);
}
int main()
{
    // int t;
    // cin>>t;
    printNos(1, 5);
    return 0;
}