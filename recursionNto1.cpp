#include<iostream>
using namespace std;

void reverse(int n){
    if(n<1) return;
    cout<<n<<" ";
    reverse(n-1);

}

int main()
{
    int t;
    cin>>t;
    reverse(t);
    cout<<endl;
    return 0;
}