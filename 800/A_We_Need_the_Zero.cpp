#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        x = x ^ a;
    }
    if (n % 2 == 0)
    {
        if (x != 0)
        {
            cout << -1 << endl;
            return;
        }
        cout << x << endl;
    }
    else
    {
        cout << x << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}