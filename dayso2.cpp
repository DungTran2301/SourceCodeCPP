//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

string res = "";
void incauhinh(int a[], int n) {
    cout << "[";
    for (int i=0; i<n-1; i++) cout << a[i] << " ";
    cout << a[n-1] << "]" << " ";
    
}
void backTrack(int a[], int n) {
    int b[100] = {0};
    for (int i=0; i<n; i++) {
        b[i] = a[i]+a[i+1];
    }
    if (n>1) backTrack(b, n-1);
    incauhinh(a, n);
}
void solve(){
    int n;
    int a[100] = {0};
    
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    backTrack(a, n);
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