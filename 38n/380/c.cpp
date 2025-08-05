#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, k;
    string s;
    cin >> n >> k >> s;
    string t = "";
    vector<int> cou(0);
    for (long i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            s[i] = 'a';
        }
        else
        {
            s[i] = 'b';
        }
    }
    for (long i = 0; i < n;)
    {
        long j = i;
        long count = 0;
        char temp = s[i];
        while (j < n && s[j] == temp)
        {
            j++;
            count++;
        }
        t += temp;
        cou.emplace_back(count);
        i = j;
    }
    long m = t.size();
    if (t[0] == 'a')
    {
        swap(t[k * 2 - 2], t[k * 2 - 1]);
        swap(cou[k * 2 - 2], cou[k * 2 - 1]);
    }
    else
    {
        swap(t[k * 2 - 2], t[k * 2 - 3]);
        swap(cou[k * 2 - 2], cou[k * 2 - 3]);
    }
    for (long i = 0; i < m; i++)
    {
        if (t[i] == 'a')
        {
            for (long j = 0; j < cou[i]; j++)
            {
                cout << 0;
            }
        }
        else
        {
            for (long j = 0; j < cou[i]; j++)
            {
                cout << 1;
            }
        }
    }
    cout << endl;
}