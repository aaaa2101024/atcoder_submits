#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n + 1, {0, 0});
    int check = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x != -1)
            a[x].first = i;
        else
            check = i;
        a[i].second = i;
    }
    while (true)
    {
        cout << a[check].second << ' ';
        check = a[check].first;
        if(check == 0)
            break;
    }
    cout << endl;
}