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
    int k; cin >> k;
    string s; cin >> s;
    vector <int> tg(10000, 0);
    vector <int> a;
    int n = s.size();
    if (k>n) {
        return;
    }
    for (int i=0; i<n; i++) {
        int index = s[i] - ' ';
        if (tg[index] == 0) {
            for (int j=i; j<n; j++) {
                if (s[i] == s[j]) tg[index]++;
            }
            a.push_back(tg[index]);
        }
    }
    n = a.size();
    sort (a.begin(), a.end());
    int tmp=0;
    while (tmp < k) {
        for (int i=n-1; i>=0; i--){
            if (i==n-1) {
                while (a[i] >= a[i-1]) {
                    a[i]--; tmp++;
                    if (tmp == k) break;
                }
            } else {
                if (a[i] > a[i+1]) {
                    a[i]--;
                    tmp ++;
                }
                else {
                    i = n;
                }
            }
            if (tmp == k) break;
        }
    }
    int res = 0;

    for (int i=0; i<a.size(); i++) {
        res += a[i] *a[i];
        // cout << a[i] << " ";
    }
    cout << res << endl;
}


int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}