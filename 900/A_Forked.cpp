#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    int x[] = {a, a, -a, -a, b, -b, b, -b};
		int y[] = {b, -b, b, -b, a, a, -a, -a};
		int cnt = 0;
		map<int, vector<int>> m;
		for(int i = 0; i < 8; ++i){
			int xi = xk + x[i];
			int yi = yk + y[i];
			for(int j = 0; j < 8; ++j){
				if(xi + x[j] == xq && yi + y[j] == yq){
					int f = 0;
					for(auto i: m[xi]){
						if(i == yi){
							f = 1;
							break;
						}
					}
					if(f) continue;
					m[xi].push_back(yi);
					// cout << xi << ":" << yi << " ";
					// cout << xi + x[j] << ":" << yi + y[j] << ln;
					++cnt;
					//break;
				}
			}

		}
		cout << cnt << endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}