#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> check;
    for(int i = 0;i < 4;i++)
    {
        int x;
        cin >> x;
        check.insert(x);
    }
    if(check.size() == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}