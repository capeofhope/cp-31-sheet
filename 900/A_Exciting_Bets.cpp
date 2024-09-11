#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
typedef long long ll;
typedef long long int lli;
typedef vector<vector<lli>> vvi;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpii;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        ll g = abs(a - b);
        ll m=min(a%g,g-a%g);
        cout<<g<<" "<<m<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}