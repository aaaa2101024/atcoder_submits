#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p;
    cin >> n >> m >> p;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i == p*count + m)
        {
            count++;
        }
    }
    cout << count << endl;
}