//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
#define Max 1000
using namespace std;
vector <long long> res(501, -1);
int n; 
void sinh () {
    queue <ll> q;
    q.push(9);
    while (q.size()) {
        long long s1 = q.front(); q.pop();
        if (s1 % n == 0) {
            res[n] = s1;
            return;
        }
        q.push(s1*10);
        q.push(s1*10+9);
    }
}
void solve(){
    cin >> n;
    if (res[n] == -1) {
        sinh();
        cout << res[n] << endl;
    }
    else {
        cout << res[n] << endl;
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