#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    char c[10][10];
    int ans=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>c[i][j];
            if(c[i][j]=='X'){
                int x=i+1,y=j+1;
                if(x>5){
                    x=5-(i%5);
                }
                if(y>5){
                    y=5-(j%5);
                }
                ans+=min(x,y);
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}