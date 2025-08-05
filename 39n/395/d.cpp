#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    map<int,int> hato;
    vector<int> tran(n);
    for(int i = 0;i < n;i++)
    {
        hato[i] = i;//ハト＞巣
        tran[i] = i;
    }
    for(int i = 0;i < q;i++)
    {
        int op;
        cin >> op;
        if(op == 1)
        {
            int a,b;
            cin >> a >> b;
            a--;
            b--;
            hato[a] = b;
        }
        else if(op == 2)
        {
            int a,b;
            cin >> a >> b;
            a--;
            b--;
            swap(tran[a],tran[b]);
        }
        else if(op == 3)
        {
            int a;
            cin >> a;
            a--;
            cout << tran[hato[a]] + 1 << endl;
        }
    }
}