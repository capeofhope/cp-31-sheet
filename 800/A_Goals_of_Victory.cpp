#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum*(-1)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}