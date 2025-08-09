#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<vector<int>> a(1000000,vector<int>(0));
    for(int i = 0;i < x;i++)
    {
        int flag = 0;
        cin >> flag;
        if(flag == 1)
        {
            int q;
            cin >> q;
            a.at(q).push_back(1);
        }

        else if(flag == 2)
        {
            int q;
            cin >> q;
            a.at(q).pop_back();
        }
        else if(flag == 3)
        {
            int count = 0;
            for(int j = 0;j < 1000000;j++)
            {
                if(a.at(j).size() != 0)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
}