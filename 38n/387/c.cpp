#include <bits/stdc++.h>
using namespace std;

int main()
{
    long l,r;
    cin >> l >> r;
    long l_ans = 0,r_ans = 0;
    string ll = to_string(l);
    string rr = to_string(r);
    int n = ll.size();
    for(int i = 1;i < n - 1;i++)
    {
        for(int j = 1;j <= 9;j++)
        {
            for(int k = 0;k < i;k++)
            {
                l_ans += 1 * j;
            }
        }
    }
    for(int i = 0;i < ll[0] - 1;i++)
    {
        
    }
    cout << r_ans - l_ans << endl;
}