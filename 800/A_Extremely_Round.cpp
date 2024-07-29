#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    if(n<=9){
        cout<<n<<endl;
    }else{
       int ans=9;
       for(int i=10,j=1;i<=n;++j){
        int k=i*j;
        if(k>n) break;
        ++ans;
        if(j==10){
            j=1;
            i=i*10;
        }
       }
       cout<<ans<<endl;
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