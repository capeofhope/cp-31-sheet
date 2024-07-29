#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll cnt=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==2)cnt++;
    }
    int cnt2=0;
    for(ll i=0;i<n;i++){
        if(arr[i]==2){
            cnt2++;
            cnt--;
        }
        if(cnt2==cnt){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;

}

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}