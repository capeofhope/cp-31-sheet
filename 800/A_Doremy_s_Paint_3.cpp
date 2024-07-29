#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpp[a[i]]++;
    }
    if(mpp.size()>2){
        cout << "No" << endl;
    }else{
        for(auto it:mpp){
            if(it.second>=(n/2)){
                continue;
            }else{
                cout << "No" << endl;
                return;
            }
        }
        cout << "Yes" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}