#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+c/2+c%2>b+c/2){
        cout<<"First"<<endl;
    }else{
        cout<<"Second"<<endl;
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