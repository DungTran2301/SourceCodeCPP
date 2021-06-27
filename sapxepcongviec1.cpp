//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y) {
    return x.second < y.second;
}
void solve(){
    int n; cin >> n;
    vector <pair<int, int> > a(n);
    vector <int> b(n);
    for (int i=0; i<n; i++) 
        cin >> a[i].first;
    for (int i=0; i<n; i++) 
        cin >> a[i].second;
    sort(a.begin(), a.end(), cmp);
    int j=0, dem = 1;
    for (int i=1; i<n; i++) {
        if (a[i].first >= a[j].second) {
            dem++; j=i;
        }
    }
    cout << dem << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}