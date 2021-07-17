//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

void solve() {
	ll n, res = 0;
	cin >> n;
	ll a[n], b[n]={};
	for(int i = 0; i < n; i++) cin >> a[i];
	if (n < 2) {
		for(int i = 0; i < n; i++) res = max(res, a[i]);
		cout << res << endl;
		return;
	}
	b[0] = a[0];
	b[1] = a[1];
	b[2] = a[0] + a[2];
	for(int i = 3; i < n; i++) {
		b[i] = max(b[i-2], b[i-3]) + a[i];
		res = max(res,b[i]);
	}
	cout << res << endl;
}

int main(){
	faster();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}