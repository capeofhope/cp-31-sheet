#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll mini = (k * k + k);
    ll maxi = (n * (n + 1) - ((n - k) * (n - k + 1)));
    if (x * 2 >= mini and 2 * x <= maxi)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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