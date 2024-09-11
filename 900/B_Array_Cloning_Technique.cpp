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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int maxi=0;
    int cnt=1,val=arr[0];
    for(int i=1;i<n;i++){
        if(val==arr[i]){
            cnt++;
        }else{
            maxi=max(cnt,maxi);
            val=arr[i];
            cnt=1;
        }
    }
    maxi=max(maxi,cnt);
    // cout<<maxi<<endl;
    if(maxi==n){
        cout<<0<<endl;
        return;
    }
    int ans=n-maxi;
    int x=ans;
    int i=1;
    while(x>=i*maxi){
        ans++;
        x-=i*maxi;
        i=i*2;

    }
    if(x>0) ans++;
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