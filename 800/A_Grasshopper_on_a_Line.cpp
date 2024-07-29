#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n%k){
        cout<<1<<endl<<n<<endl;
    }else{
        cout<<2<<endl;
        cout<<n-k+1<<" "<<k-1<<endl;
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