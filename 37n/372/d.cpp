#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    int ans = 0;
    int max_bul = -1;
    for(int i = 0;i < n;i++)
    {
        if(max_bul < h[i])
        {
            max_bul = h[i];
            ans++;
        }
    }
    cout << ans << ' ';
    max_bul = h[0];
    for(int i = 1;i < n;i++)
    {
        
    }
    cout << endl;
}