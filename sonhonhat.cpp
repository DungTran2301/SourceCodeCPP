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
    int n, d; cin >> d >> n;
    vector <int> a(n);
    if (d == 0 && n != 0) {
        cout << -1 << endl;
        return;
    }
    int i = n-1;
    while (i >= 0 && d != 0) {
        if (d>=9){
            a[i] = 9;
            d-=9;
        }
        else {
            a[i] = d;
            d=0;
        }
        i--;
    }
    if (d != 0 || i == n-1) {
        cout << -1 << endl;
        return;
    }
    if (a[0] == 0) {
        a[0] = 1;
        for (int j=1; j<n; j++) {
            if (a[j] != 0) {
                a[j]-=1;
                break;
            }
        }
    }
    for (int i:a) cout << i;
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}