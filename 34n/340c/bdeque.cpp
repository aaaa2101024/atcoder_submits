#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    deque<int> x;
    for(int i = 0;i < q;i++)
    {
        int y,z;
        cin >> y >> z;
        switch (y)
        {
        case 1:
            x.emplace_back(z);
            break;
        default:
            cout << x[x.size() - z] << endl;
            break;
        }
    }
}