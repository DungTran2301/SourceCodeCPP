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
    int n; cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];
    sort(a.begin(), a.end());
    if (n>=4) {
        ll tg1 = a[0]*a[n-1]*a[n-2];
        ll tg2 = a[0]*a[1]*a[n-1];
        ll tg3 = a[n-1]*a[n-2];
        ll tg4 = a[0]*a[1];
        ll tg5 = a[n-3]*a[n-1]*a[n-2];

        cout << max(tg1, max(tg2, max(tg3, max(tg4, tg5)))) << endl;
    } else {
        ll tg1 = a[2]*a[1]*a[0], tg2 = a[2]*a[1], tg3 = a[1]*a[0];
        cout << max(tg1, max(tg3, tg2)) << endl;
    }
}

int main(){
    faster();
    int t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;    
}