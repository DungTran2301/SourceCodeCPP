//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long

using namespace std;
vector <char> res;
vector <string> ans;
bool check = false;
int a[100][100];
int n;
void backTrack(int i, int j, string s) {
    if (i==n && j==n && a[i][j]==1) {
        check=true;
        ans.push_back(s);
    }
    if (i==1 && j==1 && a[i][j]==0) {
        check=false;
        return;
    }
    if (i<n && a[i+1][j]==1){
        backTrack(i+1, j, s+"D");
    }
    if (j<n &&a[i][j+1]==1){
        backTrack(i, j+1, s+"R");
    }
}
void solve(){
    cin >> n;
    ans.clear();
    check = false;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) cin >> a[i][j];
    backTrack(1, 1, "");
    sort(ans.begin(), ans.end());
    if (!check) {
        cout << -1 << endl;
    }
    for (int i=0; i<ans.size(); i++) cout << ans[i] << " ";
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