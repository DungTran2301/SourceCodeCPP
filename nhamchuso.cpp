//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int chuyenSix(string s) {
    int res = 0;
    for (int i = 0; i<s.size(); i++) {
        if (s[i] == '6') res = res*10 + (s[i] - '0') - 1;
        else res = res*10 + (s[i] - '0');
    }
    return res;
}
int chuyenFive(string s) {
    int res = 0;
    for (int i = 0; i<s.size(); i++) {
        if (s[i] == '5') res = res*10 + (s[i] - '0') + 1;
        else res = res*10 + (s[i] - '0');
    }
    return res;
}
void solve(){
    string a, b;
    cin >> a >> b;
    cout << chuyenSix(a) + chuyenSix(b) << " " << chuyenFive(a) + chuyenFive(b);
}

int main(){
    faster();
    int t=1;
    //cin >> t;
    while (t--)
        solve();
    return 0;    
}