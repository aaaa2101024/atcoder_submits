#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<char> s(N);
    for(int i = 0;i < N;i++) cin >> s[i];
    for(int i = 0;i < N - 2;i++)
    {
        if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}