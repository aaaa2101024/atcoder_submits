#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(5);
    bool flag = false;
    for(int i = 0;i < 5;i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0;i < 4;i++)
    {
        if(a[i] >= a[i + 1])
        {
            ans++;
            swap(a[i],a[i + 1]);
        }
    }
    if(ans == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}