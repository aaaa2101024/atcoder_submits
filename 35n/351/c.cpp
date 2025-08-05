#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n), b(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b.emplace_back(a[i]);
        while (true)
        {
            int m = b.size();
            if(m == 1)
            {
                break;
            }
            else if (b[m - 2] == b[m - 1])
            {
                long temp = b[m - 1] + 1;
                b.pop_back();
                b.pop_back();
                b.push_back(temp);
            }
            else
            {
                break;
            }
        }
    }

    cout << b.size() << endl;
}