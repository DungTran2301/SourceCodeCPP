//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n, x;
string s;
vector <string> result;
void backTrack(int vt, string res) {
    for (int i=vt; i<n; i++) {
        res.push_back(s[i]);
        result.push_back(res);
        backTrack(i+1, res);
        res.pop_back();
    }
}
void solve(){
    cin >> n;
    cin >> s;
    result.clear();
    backTrack(0, "");
    sort(result.begin(), result.end());
    for (string i:result) cout << i << " ";
    cout << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}