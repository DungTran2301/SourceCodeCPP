//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
vector <string> v;
int a[30][30] = {0}, x[15];
int result = base, n=0;
int check [100] = {0};
int findN(string s1, string s2) {
    int dem[30] = {0};
    int resf = 0;
    for (char i:s1)
        dem[i-'A']++;
    for (char i:s2)
        dem[i-'A']++;
    for (int i=0; i<26; i++) if (dem[i] == 2) resf++;
    return resf;
}
void Try(int dem, int sum) {
    if (dem == n) {
        result = min(result, sum);
        return;
    }
    for (int i=1; i<=n; i++) {
        if (!check[i] && sum + a[x[dem]][i] < result) {
            x[dem+1] = i;
            check[i] = 1;
            Try(dem+1, sum + a[x[dem]][i]);
            check[i] = 0;
        }
    }
}
void solve(){
    cin >> n; v.resize(n+1);
    for (int i=1; i<=n; i++) {
        cin >> v[i];
    }
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            a[i][j] = a[j][i] = findN(v[i], v[j]);
        }
    }
    Try(0, 0);
    cout << result << endl;
}

int main(){
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;    
}