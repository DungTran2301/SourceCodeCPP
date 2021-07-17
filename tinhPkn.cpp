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
	int n, k; cin >> n >> k;
    if (k>n) {
        cout << 0 << endl;
        return;
    }
    long long res = n;
    for (int i=n-1; i>=n-k+1; i--) {
        res = res*i;
        res %= base;
    }
    cout << res << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}