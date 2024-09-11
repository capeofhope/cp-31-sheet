#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
typedef long long ll;
typedef long long ll;
typedef vector<vector<ll>> vvi;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpii;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vl arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(),arr.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if(i%2==0){
            ans += arr[i];
        }else{
            ll diff=min(arr[i-1]-arr[i],k);
            arr[i]+=diff;
            k-=diff;
            ans-=arr[i];
        }
    }
    cout << ans << endl;
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