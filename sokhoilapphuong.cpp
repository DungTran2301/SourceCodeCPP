//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
vector <ll> p;
void prepare() {
    for (int i=1; i<=100; i++) {
        p.push_back(i*i*i);
    }
}
bool xuly(long long x, long long y) {
    string s1 = to_string(x);
    string s2 = to_string(y);
    int dem = 0;
    for (int i=0; i<s1.size(); i++) {
        while (s1[i] != s2[dem] && dem < s2.size()) dem++;

        if (i== s1.size()-1 && dem < s2.size() && s1[i] == s2[dem]) return true;
        dem++;
    }
    return false;
}
void solve(){
    long long res = -1, n; cin >> n;
    for (int i=p.size()-1; i>=0; i--) {
        if(p[i] == n) {
            cout << n << endl;
            return;
        }
        if (p[i] < n) {
            if (xuly(p[i], n)) {
                res = p[i];
                break;
            }
            
        }
    }
    cout << res << endl;
}

int main(){
    faster();
    prepare();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}