#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'W')
        {
            cout << s[i];
        }
        else
        {
            bool flag = false;
            int j = i;
            while (true)
            {
                j++;
                if (s[j] != 'W')
                {
                    flag = true;
                    if (s[j] == 'A')
                    {
                        cout << 'A';
                        for (; i < j; i++)
                        {
                            cout << 'C';
                        }
                    }
                    else
                    {
                        for (; i < j; i++)
                        {
                            cout << s[i];
                        }
                        cout << s[j];
                    }
                }
                else if(j == n - 1)
                {
                    flag = true;
                    if (s[j] == 'A')
                    {
                        cout << 'A';
                        for (; i < j; i++)
                        {
                            cout << 'C';
                        }
                    }
                    else
                    {
                        for (; i < j; i++)
                        {
                            cout << s[i];
                        }
                        cout << s[j];
                    }
                }
                if(flag)
                {
                    break;
                }
            }
        }
    }
    cout << endl;
}