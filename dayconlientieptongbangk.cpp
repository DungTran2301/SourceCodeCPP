//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

int n;
ll k;
vector<ll> a;
void solve() {
    cin>>n>>k;
    a.clear(); a.resize(n+1, 0);
    for(int i=1; i<=n; i++){
        ll x; cin>>x;
        a[i] = x + a[i-1];
    }
    for(int i=1; i<=n; i++){
        int it = lower_bound(a.begin(), a.end(), a[i] - k) - a.begin();
        if(it <= n && i != it && a[i] - a[it] == k){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}