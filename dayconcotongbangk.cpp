//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int res[100];
int n, k, sum = 0, check = 0;
int a[100];
void incauhinh(int l) {
    check = 1;
    cout << "[";
    for (int i=1; i<l; i++) {
        cout << res[i] << " ";
    }
    cout << res[l] << "] ";
}
void backTrack(int i, int j) {
    for (int t = j+1; t<n; t++) {
        if (sum + a[t] <= k) {
            res[i] = a[t];
            sum += a[t];
            if (sum==k) incauhinh(i);
            else
            backTrack(i+1, t);
            sum -= a[t];
        }
        
    }
}
void solve(){
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    backTrack(1, -1);
    if (check == 0) cout << -1;
    cout << endl;
    check = 0;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}