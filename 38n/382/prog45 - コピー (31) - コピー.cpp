#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long temp = a[0];
    vector<pair<int, long>> M(0);
    M.emplace_back(0, a[0]);
    for (int i = 0; i < n; i++)
    {
        if (temp <= a[i])
        {
            continue;
        }
        else
        {
            temp = a[i];
            M.emplace_back(i, a[i]);
        }
    }
    int nn = M.size();
    int mi = M[nn - 1].second;
    reverse(M.begin(),M.end());
    for (int i = 0; i < m; i++)
    {
        int left = 0;
        int right = nn - 1;
        if (mi > b[i])
        {
            cout << -1 << endl;
        }
        else
        {
            while (true)
            {
                int mid = (left + right) / 2;
                if(b[i] > M[mid].second)
                {
                    left = mid;
                }
                else if(b[i] < M[mid].second)
                {
                    right = mid;
                }
            }
        }
    }
}