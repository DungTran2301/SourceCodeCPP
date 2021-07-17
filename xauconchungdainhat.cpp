//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int lcs (string &a, string &b) {
    int m = a.size(), n = b.size();
    a = " " + a;
    b = " " + b;
    vector < vector<int> > f(m+1, vector <int> (n+1, 0));

    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++) {
            if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
            else f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    return f[m][n];
}
void solve(){
    string a, b;
    cin >> a  >> b;
    cout << lcs(a, b) << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}