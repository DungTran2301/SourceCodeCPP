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
vector <vector <int> > result;
vector <int> res;
void backTrack(int sum, int truoc) {
    if (sum < 0) return;
    if (sum==0) {
        result.push_back(res);
        return;
    }
    for (int i=truoc; i>=1; i--) {
        res.push_back(i);
        backTrack(sum-i, i);
        res.pop_back();
    }
}
void solve(){
    cin >> n;
    result.clear();
    backTrack(n, n);
    if (result.size() == 0) {
        cout << -1 << endl;
    } else {
        cout << result.size() << endl;
        for (int i=0; i<result.size(); i++) {
            cout << "(";
            for (int j=0; j<result[i].size()-1; j++) {
                cout << result[i][j] << " ";
            }
            cout << result[i].back() << ") ";
        }
    }
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