//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
//#define base long long 123456789
#define ll long long
long long base = 123456789;
using namespace std;
void solve(){
    int n, s;
    cin >> n >> s;
    int a[203] = {0};
    for (int i=1; i<=n; i++) cin >> a[i];
    int L[40001] ={0};
    L[0] = 1;
    for (int i=1; i<=n; i++) {
        for (int j=s; j>=a[i]; j--) {
            if (L[j] == 0 && L[j-a[i]] == 1) L[j] = 1;
        }
    }
    if (L[s] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}