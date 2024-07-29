#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==k) cnt++;
    }
    if(cnt>=1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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