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
    string a, b; cin >> a >> b;
    int gta=0, gtb=0;
    for (int i=a.size()-1; i>=0; i--) {
        gta += pow(k, a.size()-i-1) * (a[i]-'0');
    }
    for (int i=b.size()-1; i>=0; i--) {
        gtb += pow(k, b.size()-i-1) * (b[i]-'0');
    }
    int res = gta+gtb;
    string ans = "";
    while (res) {
        ans = char(res%k + '0') + ans;
        res/=k;
    }
    cout << ans << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}