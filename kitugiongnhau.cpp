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
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> dp(n+1, 0);
    dp[1] = x;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1]+x;
        if (i%2 == 0) dp[i] = min(dp[i], dp[i/2]+z);
        else dp[i] = min(dp[i], dp[(i+1)/2] + y+ z);
    }
    cout << dp[n] << endl;
}

int main(){
	faster();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}