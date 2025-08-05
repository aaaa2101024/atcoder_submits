#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    if(x <= z && z <= y)
    {
        cout << "Yes" << endl;
    }
    else if(y <= z && z <= x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}