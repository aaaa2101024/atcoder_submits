#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, a, b;
    cin >> n >> a >> b;
    long week = a + b;
    set<long> ans;
    for (int i = 0; i < n; i++)
    {
        long day;
        cin >> day;
        day %= week;
        ans.insert(day);
    }
    long di = 0;
    long s = *begin(ans);
    for(auto &x:ans)
    {
        long temp = x;
        di = max(di,x - s);
        s = temp;
    }
    di = max(di,min(week - *rbegin(ans) + *begin(ans),*rbegin(ans) - *begin(ans)));
    if(di < a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
