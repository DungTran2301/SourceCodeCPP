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
    int n, s, m;
    cin >> n >> s >> m;
    if ((m*7 > n*6 && s > 6) || m>n) {
        cout << -1 << endl;
        return;
    }
    else {
        int days = (m*s)/n;
        if (m*s % n !=0) days++;
        cout << days << endl;
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