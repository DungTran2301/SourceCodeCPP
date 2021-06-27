//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[10000007] = {0};
void solve(){
    int sum = 0;
    int n, k; cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);
    int x = 0;
    if (k*2>n) k = n-k;
    for (int i=0; i<k; i++) x+=a[i];
    cout << sum-2*x << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}