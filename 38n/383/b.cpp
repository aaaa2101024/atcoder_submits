#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            for (int ii = 0; ii < h; ii++)
            {
                for (int jj = 0; jj < w; jj++)
                {
                    if (s[i][j] == '.' && s[ii][jj] == '.')
                    {
                        int temp = 0;
                        for (int k = 0; k < h; k++)
                        {
                            for (int kk = 0; kk < w; kk++)
                            {
                                if (s[k][kk] == '.')
                                {
                                    if ((abs(k - i) + abs(kk - j) <= d) || ((abs(k - ii)) + abs(kk - jj)) <= d)
                                    {
                                        temp++;
                                    }
                                }
                            }
                        }
                        ans = max(ans, temp);
                    }
                }
            }
        }
    }
    cout << ans << endl;
}