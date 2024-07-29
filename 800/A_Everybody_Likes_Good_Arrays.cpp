#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int j = i + 1;
        if (j == n)
            break;
        int cnt = 0;
        while (a[j] % 2 == a[i] % 2)
        {
            ++cnt;
            ++j;
            if (j == n)
                break;
        }
        ans += cnt;
        i = j - 1;
    }
    cout << ans << endl;
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