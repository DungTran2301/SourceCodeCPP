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
	string s1, s2; cin >> s1 >> s2;
	int m = s1.size();
	int n = s2.size();
	int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0) 						dp[i][j] = j;
            else if (j == 0) 					dp[i][j] = i;
            else if (s1[i - 1] == s2[j - 1])	dp[i][j] = dp[i - 1][j - 1];
            else 								dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1])); 
        }
    }
	cout << dp[m][n] << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}