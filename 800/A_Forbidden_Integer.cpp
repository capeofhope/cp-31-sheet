#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while(t--> 0){
        int n , k , x;
        cin >> n >> k >> x;
        if(x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0 ; i < n ; i++) cout << 1 << " ";
            cout << endl;
            continue;
        }
        if(k == 1 && x == 1){
            cout << "NO" << endl;
            continue;
        }
        if( k == 2 && n % 2 != 0){
            cout << "NO" << endl;
            continue;
        }
        if(k >= 2){
            vector<int> vec;
            int even = 0 , odd = 0;
            while(n > 0){
                if(n % 2 == 0){
                    even++;
                    n -= 2;
                    vec.push_back(2);
                }
                else{
                    odd++;
                    n -= 3;
                    vec.push_back(3);
                }
            }
             cout <<"YES" << endl;
            cout << even + odd << endl;
            for(const auto& i : vec){
                cout << i << " ";
            }
            cout << endl;
        }
        
       
    } 
    return 0;
}