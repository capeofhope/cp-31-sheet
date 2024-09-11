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
    int a, b, c;
    cin >> a >> b >> c;
    int x = a + 2 * (b - a);
    int y = a + (c - a) / 2;
    int z = (2 * b - c);
    if ((z >= a and (z % a == 0 and z != 0)))
    {
        cout << "YES" << endl;
    }
    else if (y>=b and (c-a)%2==0 and y%b==0 and y!=0)
    {
        cout << "YES" << endl;
    }
    else if(x>=c and x%c==0 and x!=0)
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
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}