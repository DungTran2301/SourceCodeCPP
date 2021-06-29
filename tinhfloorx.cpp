//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    long long x, res = -1, vt;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x <= k &&  x > res) {
            res = x;
            vt = i;
        }
    }
    if ( res == -1) cout << -1 << endl;
    else cout << vt+1 << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}