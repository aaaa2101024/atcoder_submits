#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        int count = 1;
        if(s[i] == 'W')
        {
            while(i +  count < n)
            {
                if(s[i + count] == 'A')
                {
                    cout << 'A';
                    for(int j = 0;j < count;i++,j++)
                    {
                        cout << 'C'; 
                    }
                    break;
                }
                else if(s[i + count] == 'W')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            for(int j = 0;j < count;i++,j++)
            {
                cout << s[i];
            }
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}