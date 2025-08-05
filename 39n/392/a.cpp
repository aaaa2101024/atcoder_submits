#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(3);
    for(int i = 0;i < 3;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    bool flag = false;
    do
    {
        if(a[0] == a[1] * a[2])
        {
            flag = true;
        }
    } while (next_permutation(a.begin(),a.end()));
    
    if(flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}