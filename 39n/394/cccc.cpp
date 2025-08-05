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
        if(s[i] == 'W')
        {
            int j = i;
            while(j < n)
            {
                if(s[j] == 'A')
                {
                    cout << 'A';
                    for(;i < j;i++)
                    {
                        cout << 'C'; 
                    }
                    break;
                }
                else if(s[j] == 'W')
                {
                    j++;
                    if(j == n)
                    {
                        for(;i < j;i++)
                        {
                            cout << s[i];
                        }
                    }

                }
                else
                {
                    for(;i < j;i++)
                    {
                        cout << s[i];
                    }
                    i--;
                    break;
                }
            }
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}