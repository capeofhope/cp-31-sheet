#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt1 = 0, maxi1 = 0;
    ll cnt2 = 0, maxi2 = 0;
    for (char c : s)
    {
        if (c == '<')
        {
            cnt1++;
            maxi2 = max(cnt2, maxi2);
            cnt2 = 0;
        }
        else
        {
            cnt2++;
            maxi1 = max(cnt1, maxi1);
            cnt1 = 0;
        }
    }
    maxi2 = max(cnt2, maxi2);
    maxi1 = max(cnt1, maxi1);
    cout << max(maxi1, maxi2) + 1 << endl;
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