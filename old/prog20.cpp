#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int ab = 1;
    int ba = 1;
    for(int i = 0;i < b;i++)
    {
        ab *= a;
    }
    for(int i = 0;i < a;i++)
    {
        ba *= b;
    }
    cout << ab + ba << endl;
}