//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[1000006] = {0}, b[1000006] = {0};
void solve(){
    int m, n, k;
    cin >> m >> n >> k;
    for (int i=0; i<m; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    int dem = 0;
    int x1=0, x2=0;
    int res;
    while (true) {
        if (x1 < m && x2 < n) {
            if (a[x1] > b[x2]) {
                res = b[x2];
                x2++;
                dem++;
            }
            else {
                res = a[x1];
                x1++;
                dem++;
            }
        }
        else {
            if (x1==m) {
                res = b[x2];
                x2++;
                dem++;
            }
            else if (x2==n) {
                res = a[x2];
                x1++;
                dem++;
            }
        }
        if (dem==k) break;
    }
    cout << res << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}