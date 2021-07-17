//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int m, n;
long long a[1003][1003];
void solve(){
	cin >> m >> n;
	for (int i=1; i<=m; i++) a[i][0] = 10000005;
	for (int i=1; i<=n; i++) a[0][i] = 10000005;
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			a[i][j] = a[i][j] + min(a[i-1][j-1], min(a[i-1][j], a[i][j-1]));
		}
	}
	cout << a[m][n] << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}