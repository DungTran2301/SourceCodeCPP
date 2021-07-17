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
	int a[505][505], s[505][505];
	int m, n; cin >> n >> m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];
	for (int i=0; i<m; i++) s[0][i] = a[0][i];
	for (int i=0; i<n; i++) s[i][0] = a[i][0];
	int res = 0;
	for (int i=1; i<n; i++) {
		for (int j=1; j<m; j++) {
			if (a[i][j] == 1) {
				s[i][j] = min(s[i-1][j-1], min(s[i-1][j], s[i][j-1])) + 1;
			}
			else s[i][j] = 0;

			if (s[i][j] > res) res = s[i][j];
		}
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