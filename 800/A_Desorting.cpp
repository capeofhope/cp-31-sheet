#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), brr;
    ll diff = INT_MAX;
    bool flag = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i!=0 and arr[i]<arr[i-1]){
            flag=true;
        }
        if (i != 0)
            diff = min(diff, ((arr[i] - arr[i-1])/2)+1);
    }
    if(flag){
        cout<<0<<endl;
    }else{
        cout<<diff<<endl;
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