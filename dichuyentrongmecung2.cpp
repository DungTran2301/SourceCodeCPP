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
int a[105][105] = {0};
bool chuaXet[105][105] ;
int n;
void backTrack(int i, int j, string s) {
    chuaXet[i][j] = false;
    if (i==n && j==n && a[i][j]==1) {
        ans.push_back(s);
    }
    if (i==1 && j==1 && a[i][j]==0) {
        return;
    }
    if (i<n && a[i+1][j]==1 && chuaXet[i+1][j]){
        backTrack(i+1, j, s + "D");
        chuaXet[i+1][j] = true;
    }
    if (j<n && a[i][j+1]==1 && chuaXet[i][j+1]){
        backTrack(i, j+1, s + "R");
        chuaXet[i][j+1] = true;
    }
    if (i>1 && a[i-1][j]==1 && chuaXet[i-1][j]){
        backTrack(i-1, j, s + "U");
        chuaXet[i-1][j] = true;
    }
    if (j>1 && a[i][j-1]==1 && chuaXet[i][j-1]){
        backTrack(i, j-1, s + "L");
        chuaXet[i][j-1] = true;

    }
}
void solve(){
    cin >> n;
    ans.clear();
    check = false;
    for (int i=0; i<=100; i++) {
        for (int j=0; j<=100; j++) {
            a[i][j] = 0;
            chuaXet[i][j] = true;
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    }
    backTrack(1, 1, "");
    sort(ans.begin(), ans.end());
    if (ans.empty()) {
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