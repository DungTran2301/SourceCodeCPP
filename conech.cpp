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
    int n; cin >> n;
    long long a[55] = {0};
    a[1]=1; a[2]=2; a[3]=4;
    for (int i=4; i<=n; i++) {
        a[i] = a[i-1]+a[i-2]+a[i-3];
    }
    cout << a[n] << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}