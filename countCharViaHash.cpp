/*ascii of a = 97 to z = 122
'f'-'a'=102-97=5(the index for f in hash array)
index=ch-'a'
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Input the string: "<<endl;
    cin>>s;

    //precompute
    int hash[26]={0}; // considering the case to inly use lowercase letter otherwise, array of 256 can be declared
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;  //'a' denote ascii of lower case a

    }
    cout<<"The number of inputs: "<<endl;
    int q;
    cin>>q;
    cout<<"The Inputs: "<<endl;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }


    return 0;
}