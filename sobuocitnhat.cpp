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
    int a[1005] = {0}, b[1005] = {0};
    b[0] = 1;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int Max = 1;
    for (int i = 0; i<n; i++) {
        b[i] = 1;
        for (int j=0; j<i; j++) {
            if (a[j]<=a[i] && b[i] < b[j]+1) b[i] = b[j]+1;
            if (b[i] > Max) Max = b[i]; 
        }
    }
    cout << n-Max << endl;
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}