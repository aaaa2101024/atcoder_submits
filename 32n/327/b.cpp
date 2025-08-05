#include <bits/stdc++.h>
using namespace std;

long long power_b_of_a(int a, int b)
{
    long long sum = 1;
    for (int i = 0; i < b; i++)
    {
        sum *= a;
    }
    return sum;
}

int main()
{
    long long b;
    cin >> b;
    for (int i = 1; i < 20; i++)
    {
        long sum = power_b_of_a(i, i);
        if (b == sum)
        {
            cout << i << endl;
            return 0;
        }
        
    }
    cout << -1 << endl;
}