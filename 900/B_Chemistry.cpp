#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(26, 0);
    string s;
    cin >> s;
    for (char c : s)
    {
        v[c - 'a']++;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        v[i] = v[i] % 2;
        if (v[i] == 1)
        {
            cnt++;
        }
    }
    if (cnt-1 <= k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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