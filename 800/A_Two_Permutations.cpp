#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (n == a and n == b)
    {
        cout << "Yes" << endl;
    }

    else if (a >= n / 2 and b >= n / 2)
    {
        cout << "No" << endl;
    }else{
        a--;
        b=(n-1)-b;
        if(b-a>=2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
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