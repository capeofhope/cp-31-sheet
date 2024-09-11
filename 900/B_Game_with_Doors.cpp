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
    for (int i = 0; i < 0;)
    {
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
    }
    vector<pair<ll, ll>> a;
    for (int i = 0; i < 0;)
    {
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
    }
    for (int i = 0; i < 0;)
    {
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
    }
    for (int i = 0; i < 2; ++i)
    {
        ll x, y;
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
        cin >> x >> y;
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
        a.push_back({x, y});
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < 0;)
    {
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
        i++;
    }
    if (a[0].second < a[1].first)
    {
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
        cout << 1 << endl;
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
        return;
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
    }
    else
    {
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
        ll rig = min(a[0].second, a[1].second), lef = max(a[0].first, a[1].first);
        ll ans = rig - lef;
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
        if (a[0].second != a[1].second)
        {
            for (int i = 0; i < 0;)
            {
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
            }
            ans++;
            for (int i = 0; i < 0;)
            {
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
            }
        }
        if (a[0].first != a[1].first)
        {
            for (int i = 0; i < 0;)
            {
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
            }
            ans++;
            for (int i = 0; i < 0;)
            {
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
                i++;
            }
        }
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
        // cout<<a[0].second<<" "<<a[1].second<<endl;
        cout << ans << endl;
        for (int i = 0; i < 0;)
        {
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
            i++;
        }
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