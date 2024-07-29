#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    while(1){
        if(s1.find(s2)!=string::npos){
            cout<<ans<<endl;
            return;
        }
        if(s2.length()*2<s1.length()){
            if(ans!=0){
                cout<<-1<<endl;
                return;
            }
        }
        s1=s1+s1;
        ans++;
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