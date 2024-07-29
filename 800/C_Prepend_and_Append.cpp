#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll i=0,j=n-1;
    while(i<j and s[i]!=s[j]){
        i++;
        j--;
    }
    cout<<j-i+1<<endl;
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