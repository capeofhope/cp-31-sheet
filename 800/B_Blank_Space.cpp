#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=0;
    int i=0;
    int cnt=0;
    for(int i:a){
        if(i==0){
            cnt++;
        }else{
            maxi=max(maxi,cnt);
            cnt=0;
        }
    }
    maxi=max(maxi,cnt);
    cout<<maxi<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}