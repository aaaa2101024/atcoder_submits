#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool can = true;
    int n;
    cin >> n;
    string flag = "aaa",temp = "bbb";
    for(int i = 0;i < n;i++)
    {
        cin >> temp;
        if(temp == flag && i != n - 1 && temp == "sweet")
        {
            can = false;
        }
        else
        {
            flag = temp;
        }
    }
    if(can)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
}