#include <bits/stdc++.h>
using namespace std;
vector<int> number_divide(int x)
{
    vector<int> n(0);
    while (true)
    {
        n.push_back(x % 10);
        x /= 10;
        if (x == 0)
        {
            reverse(n.begin(), n.end());
            return n;
        }
    }
}
int main()
{
    int k;
    cin >> k;
    int x = 0;
    for (int i = 1;; i++)
    {
        vector<int> a = number_divide(i);
        int n = a.size();
        if(n >= 3 && a[0] < n - 1)
        {
            continue;
        }
        bool can = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                can = true;
                break;
            }
        }
        if (can)
            continue;
        x++;
        if (x == k)
        {
            cout << i << endl;
            return 0;
        }
    }
}