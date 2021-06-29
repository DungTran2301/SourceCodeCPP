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
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int l=0, r=n-1;
    while (l<=r) {
        int mid = (l+r)/2;
        if (a[mid] == k) {
            cout << mid+1 << endl;
            return;
        }
        if (a[mid] < k) l = mid+1;
        if (a[mid] > k) r = mid-1;
    }
    cout << "NO" << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}