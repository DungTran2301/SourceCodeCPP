//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long

using namespace std;
int a[20];
int n;
int res=0;
bool check(int x, int y) {
    for (int i=1; i<x; i++) {
        if (a[i] == y || abs(i-x) == abs(a[i]-y)) return false;
    }
    return true;
}
void Try(int i) {
    for (int j=1; j<=n; j++) {
        if (check(i, j)) {
            a[i] = j;
            if (i==n) res++;
            Try(i+1);
        }
    }
}
void solve(){
    cin >> n;
    res=0;
    Try(1);
    cout << res << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}