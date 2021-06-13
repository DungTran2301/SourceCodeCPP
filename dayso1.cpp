//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n;
int a[100] = {0};
void incauhinh() {
    cout << "[";
    for (int i=0; i<n-1; i++) cout << a[i] << " ";
    cout << a[n-1] << "]" << endl;
}
void solve(){
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    while (n>=1) {
        incauhinh();
        n--;
        for (int i=0; i<n; i++) {
            a[i] = a[i]+a[i+1];
        }
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