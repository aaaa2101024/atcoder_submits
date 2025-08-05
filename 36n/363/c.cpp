#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    int ed = 0;
    sort(s.begin(), s.end());
    do
    {
        bool flag = false;
        for (int i = 0; i < n - k + 1; i++)
        {
            string t = s.substr(i, k);
            for (int j = 0; j < k / 2; j++)
            {
                if (t[j] != t[k - 1 - j])
                {
                    break;
                }
                if(j == k / 2 - 1)
                {
                    flag = true;
                }
            }
        }
        if (flag)
        {
            ed++;
        }
        ans++;
    } while (next_permutation(s.begin(), s.end()));
    cout << ans - ed << endl;
}