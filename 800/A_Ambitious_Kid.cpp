#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ans=min(ans,abs(x));
    }
    cout<<ans<<endl;
}

int main(){
    int t=1;
    // cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}