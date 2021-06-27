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
    int n = 0; cin >> n;
    int j = 0;
    int res1 = 0, res2 = 0;
    int len = n/7;
    for (int i=0; i<=len; i++) {
        if ((n-i*7) % 4 == 0) {
            res1 = i;
            res2 = (n-i*7)/4;
        }
    }
    if (res1==0 && res2==0) {
        cout << -1 << endl;
    }
    else {
        for (int i=0; i<res2; i++) cout << "4";
        for (int i=0; i<res1; i++) cout << "7";
        cout << endl;
    }
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}