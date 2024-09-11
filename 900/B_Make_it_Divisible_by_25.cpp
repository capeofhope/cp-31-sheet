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

int totcount(string s, string t)
{
    int cnt = 0;
    int l = s.length();
    while (s.size() > 0 and t.size() > 0)
    {
        if (s.back() == t.back())
        {
            t.pop_back();
        }
        else
        {
            cnt++;
        }
        s.pop_back();
    }
    if(t.size()==0){
        return cnt;
    }
    return l;
}

void solve()
{
    string s;
    cin >> s;
    if (s.length() < 2)
    {
        cout << s.length() << endl;
    }
    else
    {
        cout << min({totcount(s, "00"), totcount(s, "25"), totcount(s, "50"), totcount(s, "75")}) << endl;
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