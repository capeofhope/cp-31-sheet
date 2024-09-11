#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        if (n <= 2)
        {
            cout << n << endl;
            return;
        }
        ll i = 1;
        ll cnt = 0;
        for (i; i <= sqrt(n); i++)
        {
            if (n % i)
            {
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
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