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
    int n;
    cin >> n;
    int res = 0;
    int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    for (int i=0; i<10; i++) {
        while (n>=a[i]){
            res++;
            n-=a[i];
        }
    }
    cout << res << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}