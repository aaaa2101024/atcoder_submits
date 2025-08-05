#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> r(q),l(q);
    for(int i = 0;i < q;i++)
    {
        cin >> l[i] >> r[i];
    }
    vector<int> count(n,0);
    for(int i = 0;i < n - 1;i++)
    {
        if(s[i] == s[i + 1])
        {
            count[i + 1]++;
        }
        count[i + 1] += count[i];
    }
    for(int i = 0;i < q;i++)
    {
        cout << count[r[i] - 1] - count[l[i] - 1] << endl;
    }
}