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
void solve(){
    cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int tmp = 0;
    for (int i=0; i<n-1; i++) {
        tmp = 0;
        for (int j=i+1; j<n; j++) {
            if (a[j] > a[i]) {
                tmp++; cout << a[j] <<  " ";
                break;
            }
        }
        if (tmp == 0) cout << -1 << " ";
    }
    cout << -1 << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}