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
    int m,n; cin >> m >> n;
    int p[105], q[105], res[10005]={0};
    for (int i=0; i<m; i++) cin >> p[i];
    for (int i=0; i<n; i++) cin >> q[i];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            res[i+j] += p[i] * q[j];
        }
    }
    for (int i=0; i<m+n-1; i++) cout << res[i] << " ";
    cout << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}