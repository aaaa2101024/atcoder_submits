#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr int INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

int main()
{
    string s,t;
    cin >> s >> t;
    map<char,int> ss,tt;
    int n = s.size();
    rep(i,26)
    {
        ss['a' + i] = 0;
        tt['a' + i] = 0;
    }
    ss['@'] = 0;
    tt['@'] = 0;
    rep(i,n)
    {
        ss[s[i]]++;
        tt[t[i]]++;
    }
    set<char> exc;
    exc.insert('a');
    exc.insert('t');
    exc.insert('c');
    exc.insert('o');
    exc.insert('d');
    exc.insert('e');
    exc.insert('r');
    int ssat = ss['@'];
    int ttat= tt['@'];
    rep(i,26)
    {
        if(!exc.count('a' + i))
        {
            if(ss[i + 'a'] != tt[i + 'a'])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            if(ss[i + 'a'] > tt[i + 'a'])
            {
                ttat -= ss[i + 'a'] - tt[i + 'a'];
            }
            else
            {
                ssat -= tt[i + 'a'] - ss[i + 'a'];
            }
        }
    }
    if(ssat >= 0 && ttat >= 0)
    {
        cout << "Yes" << endl; 
    }
    else
    {
        cout << "No" << endl;
    }
}