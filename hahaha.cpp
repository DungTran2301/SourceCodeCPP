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
    int n; cin >> n;
    queue <string> q;
    q.push("H") ;
    while (q.size()) {
        string s = q.front(); q.pop();
        if (s.size() == n) {
            if (s[s.size()-1] == 'A') {
                cout << s << endl;
            }
        }
        else if (s[s.size()-1] == 'H') {
            q.push(s+"A");
        } else {
            q.push(s+"A");
            q.push(s+"H");
        }
    }
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}