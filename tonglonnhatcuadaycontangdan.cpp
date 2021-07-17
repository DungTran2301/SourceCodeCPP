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
	vector <ll> res(n, 0);
	for (int i=0; i<n; i++) cin >> a[i];
	res[0] = a[0];
	int Max = a[0];
	for (int i=1; i<n; i++) {
		res[i] = a[i];
		for (int j=i-1; j>=0; j--) {
			if (a[i] > a[j]) {
				if (res[j] + a[i] > res[i]) res[i] = res[j] + a[i];
				if(Max < res[i]) Max = res[i];
			}
		}
	}
	cout << Max << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}