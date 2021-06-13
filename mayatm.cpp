//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n, s;
bool haveRes = false;
void backTrack(vector <int> a, int sum, int vt, int num) {
    if (sum < 0) return;
    if (sum==0) {
        haveRes = true;
        cout << num << endl;
        return;
    }
    for (int i=vt; i<n; i++) {
        if (!haveRes) {
            backTrack(a, sum-a[i], i+1, num+1);
        }
    }
}
void solve(){
    cin >> n >> s;
    haveRes = false;
    vector <int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.rbegin(), a.rend());
    backTrack(a, s, 0, 0);
    if (!haveRes) {
        cout << -1 << endl;
    }
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}