#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,T,A;
    cin >> N >> T >> A;
    int no = N -( T + A );
    if(no + A < T || no + T < A)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        cout << "No" << endl;
        return 0;
    }
}