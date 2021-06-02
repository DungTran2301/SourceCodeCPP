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
    string s;
    cin >> s;
    string res = s;
    for (int i=1; i<s.size(); i++) {
        if (s[i] != s[i-1]) res[i] = '1';
        else res[i] = '0';
    }
    cout << res << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}