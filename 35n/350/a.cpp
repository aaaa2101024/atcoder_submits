#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = s.substr(3,3);
    for(int i = 1;i <= 349;i++)
    {
        if(316 == stoi(t))
        {
            continue;
        }
        else if(i == stoi(t))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}