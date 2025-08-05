#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(0);
    for(int i = 0;true;i++)
    {
        int x;
        cin >> x;
        a.emplace_back(x);
        if(x == 0)
        {
            break;
        }
    }
    reverse(a.begin(),a.end());
    for(int i = 0;i < a.size();i++)
    {
        cout << a[i] << endl;
    }
}