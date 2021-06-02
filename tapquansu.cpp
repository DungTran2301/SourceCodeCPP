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
    int a[100] = {0}, b[100]= {0};
    int check[100] = {0};
    for (int i=1; i<=k; i++) {
        cin >> a[i];
        b[i] = a[i];
        check[a[i]] = 1;
    }
    int i = k;
    while(i > 0 && a[i] == n-k+i) i--;
    if (i == 0) {
        cout << k << endl;
    } else {
        check[b[i]] = 0;
        b[i] = b[i]+1;
        check[b[i]] = 1;
        for (int j=i+1; j<=k; j++) {
            check[b[j]] = 0;
            b[j] = b[j-1] + 1;
            check[b[j]] = 1;
        }
        int res = 0;
        for (int i=1; i<=n; i++) {
            if (check[a[i]] == 1) res++;
        }
        cout << k-res << endl;
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