#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
typedef long long ll;
typedef long long int lli;
typedef vector<vector<lli>> vvi;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpii;

void solve(){
    ll n,k;
    cin>>k>>n;
    ll a[n*k+1];
    for(int i=1;i<=n*k;i++){
        cin>>a[i];
    }
    ll x=(k+1)/2-1;
    x=k-x;
    ll z=n*k+1;
    ll ans=0;
    while(n--){
        z-=x;
        if(z<=0) break;
        ans+=a[z];
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}