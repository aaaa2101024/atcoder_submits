#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int ed = 0;
    map<int,int> ans;
    for(int i = 0;i < q;i++)
    {
        int a,x;
        cin >> a;
        switch(a)
        {
            case 1:
                cin >> x;
                if(ans.count(x))
                {
                    ans[x]++;
                }
                else
                {
                    ans[x] = 1;
                }
            break;
            case 2:
                cin >> x;
                ans[x]--;
                if(ans[x] == 0)
                {
                    ans.erase(x);
                }
            break;
            case 3:
                cout << ans.size() << endl;
            break;
        }
    }
}