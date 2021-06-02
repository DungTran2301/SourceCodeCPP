//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int x[100] = {0}, res[100], sum = 0, a[100], c[100];
bool cauhinhcuoi = false;
int n, s;
void sinh () {
    int i=n;
    while (i>0 && x[i] == 1) {
        x[i] = 0;
        i--;
    }
    if (i==0) cauhinhcuoi = true;
    else {
        x[i] = 1;
    }

}
void check() {
    int tmp = 0, tmp2=0;
    for (int i=1; i<=n; i++) {
        if (x[i] == 1) {
            tmp += a[i];
            tmp2 += c[i];
        }
    }
    if (tmp <= s && tmp2 > sum) {
        sum = tmp2;
        for (int i=1; i<=n; i++) {
            res[i] = x[i];
        }
    }
}
void solve(){
    cin >> n >> s;
    for (int i=1; i<=n; i++) cin >> c[i];
    for (int i=1; i<=n; i++) cin >> a[i];
    while (!cauhinhcuoi) {
        check();
        sinh();
    }
    cout << sum << endl;
    for (int i=1; i<=n; i++) cout << res[i] << " ";
}

int main(){
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;    
}