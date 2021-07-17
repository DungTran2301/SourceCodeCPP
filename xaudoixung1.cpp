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
    string s1; cin >> s1;
    string s2 = s1;
    int n = s1.size();
    int a[n+5][n+5];
    for (int i=0; i<n/2; i++) 
        swap(s2[i], s2[n-i-1]);
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n; j++) {
            if (i == 0 || j == 0) {
                a[i][j] = 0;
            } else {
                if (s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1] + 1;
                else {
                    a[i][j] = max(a[i-1][j], a[i][j-1]);
                }
            } 
        }
    }
    cout << n - a[n][n] << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}