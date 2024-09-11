#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
typedef long long ll;
typedef long long int lli;
typedef vector<vector<lli>> vvi;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpii;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<char>> st(101,vector<char>(101,' '));
    string s1="";
    ll maxi=0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        maxi=max(maxi,(ll)s.size());
        for(int j=0;j<s.size();j++){
            st[i][j]=s[j];
        }
    }
    for(int j=0;j<maxi;j++){
        string s="";
        for(int i=n-1;i>=0;i--){
            if(st[i][j]==' '){
                s+='*';
                continue;
            }
            s+=st[i][j];
        }
        while(s.back()=='*'){
            s.pop_back();
        }
        cout<<s<<endl;
    }

}
    int main()
    {
        int t = 1;
        // cin>>t;
        while (t-- > 0)
        {
            solve();
        }
        return 0;
    }