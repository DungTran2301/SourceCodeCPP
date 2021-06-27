//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[10000007] = {0};
void solve(){
    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    long long res = 0;
    for (int i=0; i<n; i++) {
        res = (res + i*a[i])%base;
    }
    cout << res << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}