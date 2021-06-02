//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n;
int a[100];
void incauhinh(){
    if (n%2 == 0) {
        for (int i=1; i<=n; i++ ) cout << a[i] << " ";
        for (int i=n; i>=1; i-- ) cout << a[i] << " ";
    }
    else {
        for (int i=1; i<=n; i++ ) cout << a[i] << " ";
        for (int i=n-1; i>=1; i-- ) cout << a[i] << " ";
    }
    cout << endl;
    return;
}
void backTrack(int i){
    for (int j=0; j<2; j++){
        a[i]=j;
        if (i==n) incauhinh();
        else backTrack(i+1);
    }
    return;
}
void solve(){
    cin >> n;
    n = (n+1)/2;
    backTrack(1);
}

int main(){
    faster();
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;    
}