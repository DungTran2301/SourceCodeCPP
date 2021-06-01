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
    int n, k;
    cin >> n >> k;
    int a[1004] = {0};
    for (int i=1; i<=k; i++) cin >> a[i];
    int i = k;
    while (i>0 && a[i] == n-k+i) i--;
    if (i==0){
        for (int i=1; i<=k; i++) cout << i << " ";
        cout << endl;
        return;
    }
    a[i]++;
    for (int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
    for (int j=1; j<=k; j++) cout << a[j] << " " ;
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