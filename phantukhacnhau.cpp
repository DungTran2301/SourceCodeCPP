//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
//long long a[10000006] = {0}, b[10000006] = {0};
void solve(){
    int n;
    cin >> n;
    string s1, s2;
    cin.ignore();
    getline(cin, s1);
    getline(cin, s2);
    int dem = 0;
    for (int i=0; i<s2.size(); i++) {
        if (s2[i] == ' ') dem++;
        if (s1[i] != s2[i]) {
            cout << dem +1 << endl;
            return;
        }
    }
    cout << n << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}