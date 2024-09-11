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
    ll n;
    cin >> n;
    ll a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 1; i < n - 1; ++i) {
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
			cout << "YES" << endl;
			cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
			return;
		}
	}
	cout << "NO" << endl;
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