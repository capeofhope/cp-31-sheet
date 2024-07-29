#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){
        cout<<-1<<endl;
        return;
    }
    ll ans=(d-b);
    b=d;
    a+=ans;
    if(a<c){
        cout<<-1<<endl;
        return;
    }
    ans+=abs(c-a);
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