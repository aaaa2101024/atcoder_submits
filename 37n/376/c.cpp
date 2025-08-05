#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> b(n - 1);
    priority_queue<int> a;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    for(int i = 0;i < n - 1;i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    sort(b.begin(),b.end());
    for(int j = n - 2;j >= 0 && !(a.empty());j--)
    {
        if(a.top() <= b[j])
        {
            a.pop();
            b.pop_back();
        }
        else if(ans == 0)
        {
            j++;
            ans = a.top();
            a.pop();
        }
    }
    if(b.size() == 0)
    cout << ans << endl;
    else
    cout << -1 << endl;
}