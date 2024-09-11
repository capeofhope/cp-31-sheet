#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> arr(n);

    // unordered_map<ll,ll> mpp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        // mpp[arr[i]]=i+1;
    }
    ll low=0,high=2*1e14+1;
    ll ans=-1;
    ll maxi=*max_element(arr.begin(),arr.end());
    while(low<=high){
        ll mid=(low+high)/2;
        ll cnt=0;
        for(ll i=0;i<n;i++){
            cnt+=min(mid,arr[i]);
        }
        if(cnt>m){
            high=mid-1;
        }else{
            ans=max(mid,ans);
            low=mid+1;
        }
    }
    if(ans>maxi){
        cout<<"infinite"<<endl;
        return;
    }
    cout<<ans<<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}