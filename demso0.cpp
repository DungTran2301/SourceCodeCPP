//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
//long long a[10000006] = {0}, b[10000006] = {0};
void solve(){
    int n;
    cin >> n;
    int res = 0;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x==0) res++;
    }
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