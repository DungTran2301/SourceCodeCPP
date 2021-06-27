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
    int k;
    cin >> k;
    cin >> s;
    int n = s.size();
    int a[100] = {0};
    for (int i=0; i<n; i++) {
        int tg = s[i]-'A';
        a[tg]++;
        if (a[tg] > (n+1)/k) {
            cout << -1 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}