//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long

using namespace std;
bool cmp(int a, int b) {
    return a>b;
}
void solve(){
    int n;
    int a[10004]={}, b[10004]={}, c[10004]={};
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        b[i] = c[i] = a[i];
    }
    sort(b, b+n);
    sort(c, c+n, cmp);
    for (int i=0; i<n; i++) {
        if (a[i]!=b[i] && a[i]!=c[i]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}