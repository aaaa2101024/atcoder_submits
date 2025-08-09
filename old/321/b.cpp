#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cin >> n >> x;
   vector<int> a(n - 1);
   for(int i = 0;i < n - 1;i++) cin >> a[i];
   sort(a.begin(),a.end());
   int sum = 0;
   for(int i = 0;i < n-1;i++) sum += a[i];
   if(sum - a[0] < x)
   {
      cout << -1 << endl;
      return 0;
   }
   else if(sum - a[n -  1 - 1] >= x)
   {
      cout << 0 << endl;
   }
   else
   {
      cout << x - (sum - a[0] - a[n - 1 - 1]) << endl;
   }
}