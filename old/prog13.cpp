#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,x;
    cin >> n >> h >> x;
    vector<int> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int count = 1;
    bool can = true;
    while(can)
    {
        if(x <= h + a[count - 1])
        {
            can = false;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;
}