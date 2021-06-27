//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
long long a[1000006], b[1000006], c[1000006];
vector <long long> res1;
void solve(){
    int n1, n2, n3; cin >> n1 >> n2 >> n3;
    res1.clear();
    for (int i=0; i<n1; i++) 
        cin >> a[i];
    for (int i=0; i<n2; i++) 
        cin >> b[i];
    for (int i=0; i<n3; i++) 
        cin >> c[i];
    int ia = 0, ib = 0, ic = 0;
    while (ia < n1 && ib < n2 && ic < n3) {
        if (a[ia] == b[ib] && a[ia] == c[ic]) {
            res1.push_back(a[ia]);
            ia++; ib++; ic++;
        } else {
            if (a[ia] >= b[ib] && a[ia] >= c[ic]) {
                if (a[ia] > b[ib]) ib++;
                if (a[ia] > c[ic]) ic++;
            } else if (b[ib] >= a[ia] && b[ib] >= c[ic]) {
                if (b[ib] > a[ia]) ia++;
                if (b[ib] > c[ic]) ic++;
            } else if (c[ic] >= b[ib] && c[ic] >= a[ia]) {
                if (c[ic] > b[ib]) ib++;
                if (c[ic] > a[ia]) ia++;
            }
        }
    }
    if (res1.size() == 0) {
        cout << "NO" << endl; return;
    }
    for (int i=0; i<res1.size(); i++) cout << res1[i] << " ";
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