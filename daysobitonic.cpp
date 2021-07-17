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
	vector <int> L(n), R(n);
	for (int i=0; i<n; i++) {
		cin >> a[i]; L[i] = R[i] = a[i];
	}

	for (int i=1; i<n; i++) {
		for (int j=0; j<i; j++) {
			if (a[i] > a[j]) L[i] = max(L[i], L[j] + a[i]);
		}
	}
	for (int i=n-2; i>=0; i--) {
		for (int j=n-1; j>i; j--) {
			if (a[i] > a[j]) R[i] = max(R[i], R[j] + a[i]);
		}
	}
	int res = 0;
	for (int i=0; i<n; i++) {
		res = max(res, R[i]+L[i]-a[i]);
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