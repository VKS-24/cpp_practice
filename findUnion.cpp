#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    // cout << "Inside findUnion()" << endl;
    vector<int> res;
    int i = 0;
    int j = 0;
    int n1 = a.size();
    int n2 = b.size();
    while (i < n1 && j < n2)
    {
        int n3 = res.size();
        if (a[i] <= b[j])
        {
            if (n3 == 0 || res[n3 - 1] != a[i])
            {
                res.push_back(a[i]);
            }
            i++;
        }

        else
        {
            if (n3 == 0 || res[n3 - 1] != b[j])
            {
                res.push_back(b[j]);
            }
            j++;
        }
        cout<< a[i] << " " << b[j] << " " << res[n3-1] <<endl; 
        cout<< a[i] << " " << b[j] << " " << res[n3-1] <<endl;
    }
    cout<<"Exiting while loop " <<i <<" " << j << endl;
    // empty the pending list
    int n3 = res.size();
    while (i < n1)
    {
        n3 = res.size();
        cout<<res[n3-1] << " and " <<a[i] << endl;
        if (res[n3 - 1] != a[i])
        {
            res.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        n3 = res.size();
        if (res[n3 - 1] != b[j])
        {
            res.push_back(b[j]);
        }
        j++;
    }

    return res;
}

int main()
{
    vector<int> v1 = {4, 6, 6, 9, 10, 11, 11, 11};
    vector<int> v2 = {1, 1, 1, 3, 3};

    vector<int> v3 = findUnion(v1, v2);
    cout << "Res:";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    return 0;
}