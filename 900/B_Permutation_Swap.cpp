#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll x;cin>>x;
        ans=__gcd(ans,abs(x-i));
    }
    cout<<ans<<endl;


}

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}