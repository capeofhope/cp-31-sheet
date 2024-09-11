#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]=i+1;
    }
    sort(arr.begin(),arr.end());
    cout<<mpp[arr[n-2]]<<endl;
}

int main(){
    int t=1;
    // cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}