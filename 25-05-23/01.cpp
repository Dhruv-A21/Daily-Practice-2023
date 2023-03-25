#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin >> t;
  while(t--)
  {
    ll a[3];
    for(ll i=0;i<3;i++)
    cin >> a[i];
    sort(a,a+3);
    if(a[0] % 2 == a[1] % 2 and a[2] % 2 == a[1] % 2 and a[2] % 2 == a[0] % 2)
    {
      ll k = (a[1] - a[0]) / 2;
      ll p = ((a[2] + k) - (a[0] + k))/2;
      cout << p + k << endl;
    }
    else
    cout << -1 << endl;
  }  
}
