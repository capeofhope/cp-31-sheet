#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a,b,n;
    cin>>a>>b>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x=b-1;
    for(int i=0;i<n;i++){
        b=1;
        b=min(v[i]+b,a);
        // cout<<b<<endl;
        x+=(b-1);
    }
    cout<<x+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}