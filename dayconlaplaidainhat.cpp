//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int findLongestRepeatingSub(string s, int n) {
	int dp[n+1][n+1] = {0};
	for (int i=0; i<=n; i++)
        for (int j=0; j<=n; j++)
            dp[i][j] = 0;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			if (s[i-1] == s[j-1] && i != j) {
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[n][n];
}
void solve(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	cin >> s;
	//cout << s << endl;
	cout << findLongestRepeatingSub(s, n) << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}