#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> t(0);
    for (int i = 0; i <= s.size(); i++)
    {
        for (int j = s.size(); j > i; j--)
        {
            t.push_back(s.substr(i, j));
        }
    }
    int count = 1;
    for (int i = 0; i < t.size(); i++)
    {
        bool can = true;
        for (int j = 0; j < t[i].size() / 2; j++)
        {
            if (t[i].at(j) != t[i].at(t[i].size() - 1 - j))
            {
                can = false;
                break;
            }
        }
        if(can)
        {
            if(count < t[i].size())
            {
                count = t[i].size();
            }
        }
    }
    cout << t[10000];
    cout << count << endl;
}