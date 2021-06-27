//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
char backTrack(string s, long long k, long long len, vector <long long> a) {
    if (k <= s.size()) return s[k-1];
    if (k <= a[len]/2) return backTrack(s, k, len - 1, a);
    else {
        if (k == a[len]/2 + 1) return backTrack(s, a[len]/2, len - 1, a);
        else return backTrack(s, k - a[len]/2 - 1, len-1, a);
    }
}
void solve(){
    string s; long long k; cin >> s >> k;
    long long n = s.size();
    vector <long long > a;
    long long tmp = n;
    a.push_back(tmp);
    while (tmp < k) {
        tmp *= 2;
        a.push_back(tmp);
    }
    cout << backTrack(s, k, a.size()-1, a) << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}