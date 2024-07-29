#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    swap(arr[0],arr[1]);
    swap(arr[0],arr[n-1]);
    if(arr[0]==arr[1]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        for(int i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
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