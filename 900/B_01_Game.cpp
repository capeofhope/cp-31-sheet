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
    string s;
    cin>>s;
    ll cnt0=0,cnt1=0;
    for(char& c:s){
        if(c=='0') cnt0++;
        else cnt1++;
    }
    if(min(cnt0,cnt1)%2){
        cout<<"DA"<<endl;
    }else{
        cout<<"NET"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}