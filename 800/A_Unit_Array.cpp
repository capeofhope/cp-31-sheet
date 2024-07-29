#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    int sum=0,cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1)cnt++;
        sum+=x;
    }
    if(sum>=0){
        if(cnt%2){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }else{
        if(cnt%2){
            int ans=1;
            cnt--;
            sum+=2;
            if(sum<0){
                ans+=ceil((double)(abs(sum))/2);
                // cout<<ans<<endl;
                cnt-=ans-1;
            }
            if(cnt%2){
                ans++;
                cnt--;
            }
            cout<<ans<<endl;
        }else{
            int ans=0;
            if(sum<0){
                ans+=ceil((double)(abs(sum))/2);
                // cout<<cnt<<endl;
                cnt-=ans;
            }
            if(cnt%2){
                ans++;
            }
            cout<<ans<<endl;
        }
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