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
        cnt+=(arr[i]==0);
    }
    if(cnt==n){
        cout<<0<<endl;
    }else{
        if(cnt==0){
            cout<<1<<endl;
        }else{
            int x=0;
            for(int i=0;i<n;i++){
                if(arr[i]!=0){
                    x++;
                   while(i<n and arr[i]!=0){
                    i++;
                   }
                }
            } 
            if(x==1){
                cout<<1<<endl;
            } else{
                cout<<2<<endl;
            }
        }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}