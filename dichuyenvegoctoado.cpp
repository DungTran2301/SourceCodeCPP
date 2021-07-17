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
	int m, n;cin >> m >> n;
	long long dp[30][30] = {0};
	dp[m][n] = 1;
	for (int i=m; i>=0; i--) {
		for (int j=n; j>=0; j--) {
			dp[i][j] += dp[i+1][j] + dp[i][j+1];
		}
	}
	cout << dp[0][0] << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}