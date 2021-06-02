//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100005];
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int i=n-1;
    while (i>-1 && s[i] == '1') i--;
    if (i==-1) {
        for (int j=0; j<n; j++) cout << '0';
        cout << endl;
        return ;
    }
    s[i] = '1';
    for (int j=i+1; j<n; j++) s[j]='0';
    for (int j=0; j<n; j++) cout << s[j];
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