//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
vector <ll> a, b;
int n;
void solve(){
    cin >> n; a.clear(); a.resize(n); b.clear(); b.resize(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    long long sum = 0;
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i=0; i<n; i++) {
        sum += a[i]*b[i];
    }
    cout << sum << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}