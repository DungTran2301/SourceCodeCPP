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
    int dp[100005]={};
    dp[0]=1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=min(i,k); j++){
            dp[i]+=dp[i-j];
            dp[i]%=base;
        }
    }
    cout << dp[n] << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}