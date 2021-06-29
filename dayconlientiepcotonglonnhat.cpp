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
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    b[0] = a[0];
    int Max = a[0];
    for (int i=1; i<n; i++) {
        if (b[i-1] + a[i] > a[i]) b[i] = b[i-1] + a[i];
        else b[i] = a[i];
        if (b[i] > Max) Max = b[i];
    }
    cout << Max << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}