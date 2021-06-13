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
    int a[102][102]={0}, b[102][102]={0};
    int m, n;
    int Count = 0;
    cin >> n >> m;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> a[i][j];
            if (i==1 && j==1) b[i][j] = 1;
            else
            b[i][j] = b[i-1][j] + b[i][j-1];
        }
    }
    cout << b[m][n] << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}