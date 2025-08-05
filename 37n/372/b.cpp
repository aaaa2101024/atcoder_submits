#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<int> a(0);
    vector<int> check = {1,3,9,27,81,243,729,2187,6561,19683,59049};
    for (int i = 10; i >= 0; i--)
    {
        int temp = m;
        while (temp - check[i] >= 0)
        {
            temp -= check[i];
            a.push_back(i);
        }
        m = temp;
    }
    int n = a.size();
    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}