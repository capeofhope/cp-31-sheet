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
    unordered_map<ll, ll> mpp;
    for (ll i = 0; i < n; i++)
    {
        ll m, x;
        cin >> m;
        if(m!=3){
            cin >> x;
        }
        if (m == 1)
        {
            mpp[x]++;
        }
        else if (m == 2)
        {
            mpp[x]--;
            if (mpp[x] == 0)
            {
                mpp.erase(x);
            }
        }
        else
        {
            cout << mpp.size() << endl;
        }
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}