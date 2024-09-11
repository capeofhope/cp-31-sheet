#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int ans = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans = max({ans, arr[(i - 1 + n) % n] - arr[i]});
    }
    for (int i = 0; i < n - 1; i++)
    {
        ans = max({ans, arr[n - 1] - arr[i]});
    }
    for (int i = 1; i < n; i++)
    {
        ans = max({ans, arr[i] - arr[0]});
    }
    cout << ans<<endl;
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