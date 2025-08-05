#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int day = 1;
    int next = a[0];
    for (int i = 1; i <= m; i++)
    {
        while (next - day >= 0)
        {
            cout << next - day << endl;
            day++;
        }
        if (i == m)
        {
            break;
        }
        else
            next = a[i];
    }
}