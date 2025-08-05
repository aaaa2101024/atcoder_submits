#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n;)
    {
        int j = i;
        int count = 0;
        while(s[j] != '|' && j < n)
        {
            j++;
            count++;
        }
        if(count != 0)
        {
            cout << count << ' ';
        }
        i = j + 1;
    }
    cout << endl;
}