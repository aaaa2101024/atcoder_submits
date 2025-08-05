#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> a(0);
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int n = a.size();
        int in;
        switch (x)
        {
        case 1:
            cin >> in;
            a.push_back(in);
            break;
        case 2:
            cin >> in;
            cout << a[n -in] << endl;
            break;
        }
    }
}