#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n = 0;
    cin >> n;
    vector<int> inp;
    inp.assign(n, 0);
    for (auto &x : inp)
        cin >> x;
    sort(inp.begin(), inp.end());
    if (inp.back() == inp[0])
    {
        cout << "-1\n";
        return;
    }
    else
    {
        int it = 0;
        while (inp[it] == inp[0])
            it++;
        cout << it << " " << n - it << "\n";
        for (int j = 0; j < it; ++j)
            cout << inp[j] << " ";
        for (int j = it; j < n; ++j)
            cout << inp[j] << " ";
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