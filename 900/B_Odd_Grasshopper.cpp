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
    ll x,n;
    cin>>x>>n;
    ll ans=(x%2)?1:-1;
    if(n%4==1){
        x+=ans*n;
    }else if(n%4==2){
        x-=ans;
    }else if(n%4==3){
        x-=ans*(n+1);
    }
    cout<<x<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}