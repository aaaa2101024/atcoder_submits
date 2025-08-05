#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << 'B' << endl;
    else if ((a == '<' && b == '>') || (a == '>' && b == '<'))
        cout << 'A' << endl;
    else
        cout << 'C' << endl;
}