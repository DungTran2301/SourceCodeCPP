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
    queue <pair<int, int> > q; q.push(make_pair(n, 1));
    int dem = 0;
    while (q.size()) {
        dem++;
        pair<int, int> tg = q.front(); q.pop();
        if (tg.first%2==0) {
            if (tg.first/2==1) {
                cout << tg.second << endl;
                return;
            }
            q.push(make_pair(tg.first/2, tg.second+1));
        } 
        if (tg.first%3==0) {
            if (tg.first/3==1) {
                cout << tg.second << endl;
                return;
            }
            q.push(make_pair(tg.first/3, tg.second+1));
        }
        if (tg.first-1==1) {
            cout << tg.second << endl; return;
        }
        else q.push(make_pair(tg.first-1, tg.second+1));
    }
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}