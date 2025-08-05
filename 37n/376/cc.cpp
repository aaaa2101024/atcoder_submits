#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int> a,b;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    for(int i = 0;i < n - 1;i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    int ans = 0;
    bool flag = true;
    for(;!(a.empty()) && !(b.empty());)
    {
        if(a.top() <= b.top())
        {
            a.pop();
            b.pop();
        }
        else
        {
            ans = a.top();
            flag = false;
            a.pop();
        }
    }
    if(flag)
    {
        cout << a.top() << endl;
    }
    else if(b.size() == 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}