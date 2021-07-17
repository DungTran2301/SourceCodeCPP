//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int l[1005][1005] = {0};
void solve(){
    int n, v;
    cin >> n >> v;
    int a[1005] = {0};
    int c[1005] = {0};
    for (int i=0; i<=1000; i++) {
        for (int j=0; j<=1000; j++) l[i][j] = 0;
    }
    for (int i=1; i<=n; i++)  cin >> a[i];
    for (int i=1; i<=n; i++) cin >> c[i];
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=v; j++) {
            if (a[i] <= j) {
                l[i][j] = max(l[i-1][j-a[i]] + c[i], l[i-1][j]);
            }
            else l[i][j] = l[i-1][j];
        }
    }
    cout << l[n][v] << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}