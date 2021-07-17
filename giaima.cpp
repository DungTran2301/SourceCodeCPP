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
    string s; cin >> s;
    if (s[0] == '0') {
        cout << 0 << endl; return;
    }
    int res[100] = {0};
    s = " " + s;
    res[0] = 1;
    res[1] = 1;
    int n = s.size();
    for (int i=2; i<n; i++) {
        if (s[i] == '0' && s[i-1] > '2') {
            cout << 0 << endl; return;
        }
        if (s[i] != '0') res[i] = res[i-1];
        int tg = (s[i-1] -'0') * 10 + (s[i] - '0');
        if (tg <= 26 && s[i-1] != '0') {
            res[i] += res[i-2];
        }
    }
    // for (int i=0; i<n; i++) cout << res[i]  << " "; cout << endl;
    cout << res[n-1] << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}