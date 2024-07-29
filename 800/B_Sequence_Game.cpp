#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 and v[i - 1] > v[i])
        {
            ans.push_back(1);
            ans.push_back(v[i]);
        }
        else
        {
            ans.push_back(v[i]);
        }
    }
    cout << ans.size() << endl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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