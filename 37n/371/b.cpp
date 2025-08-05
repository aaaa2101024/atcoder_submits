#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<char> b(m);
    for (int i = 0; i < m; i++)
        cin >> a[i] >> b[i];
    vector<bool> check(n);
    for (int i = 0; i < n; i++)
        check[i] = true;
    for (int i = 0; i < m; i++)
    {
        if (check[a[i] - 1] && b[i] == 'M')
        {
            cout << "Yes" << endl;
            check[a[i] - 1] = false;
        }
        else
            cout << "No" << endl;
    }
}