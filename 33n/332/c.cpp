#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    string s;
    cin >> n >> m >> s;
    int logo = 0;
    while (true)
    {
        bool flag = true;
        int temp_m = m, temp_logo = logo;
        for (int i = 0; i < n; i++)
        {
            switch (s[i])
            {
            case '0':
                temp_m = m;
                temp_logo = logo;
                break;
            case '1':
                if (temp_m != 0)
                    temp_m--;
                else if (temp_logo != 0)
                    temp_logo--;
                else
                {
                    flag = false;
                    break;
                }
                break;
            case '2':
                if (temp_logo != 0)
                {
                    temp_logo--;
                }
                else
                {
                    flag = false;
                    break;
                }
                break;
            }
        }
        if (flag)
            break;
        else
            logo++;
    }
    cout << logo << endl;
}