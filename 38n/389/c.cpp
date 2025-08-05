#include <bits/stdc++.h>
using namespace std;

int main()
{
    long q;
    cin >> q;
    deque<long> x;
    x.push_back(0);
    long place = 0;
    for (long i = 0; i < q; i++)
    {
        long qu;
        cin >> qu;
        if (qu == 1)
        {
            long l;
            cin >> l;
                long y = x.back();
                x.push_back(l + y);
        }
        else if (qu == 2)
        {
            x.pop_front();
            place = x.front();
        }
        else
        {
            long k;
            cin >> k;
            cout << x[k - 1] - place << endl;
        }
    }
}