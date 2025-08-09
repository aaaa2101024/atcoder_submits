#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }/*
    vector<string> T(length);
    for(int i = 0;i < N;i++)
    {

    }
    */
   vector<int> len(N);
   for(int i = 0;i < N;i++)
   {
        len[i] = S[i].size();
   }
   int length = 0;
    for(int i = 0;i < N;i++)
    {
        if(length < S[i].size())
        {
            length = S[i].size();
        }
    }
    for (int j = 0;j < length;j++)
    {
        for(int i = N - 1; i >= 0; i--)
        {
            int flag = 0;
            for(int k = i;k >= 0;k--)
            {
                if(len[k] >= j + 1)
                {
                    flag++;
                    continue;
                }
            }
            if(flag == 0)
            {
                continue;
            }
            else if(S[i].size() < j + 1)
            {
                cout << '*';
            }
            else
            {
                cout << S[i].at(j);
            }
        }
        cout << endl;
    }
}