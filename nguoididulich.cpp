//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100][100];
int check [100] = {0};
int n;
int res = base;
void backTrack(int vt, int sum, int Count) {
    if (Count == n) {
        res = min(res, sum + a[vt][1]);
        return;
    }
    for (int i=1; i<=n; i++) {
        if (!check[i]){
            check[i] = 1;
            if (sum + a[vt][i] < res)
            backTrack(i, sum + a[vt][i], Count + 1);
            check[i] = 0;
        }
    }
}
void solve(){
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) cin >> a[i][j];
    }
    check[1] = 1;
    backTrack(1, 0, 1);
    cout << res << endl;
}

int main(){
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;    
}