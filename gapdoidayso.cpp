//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
long long F[100];
long long find(long long k, long long n) {
    if (k == (F[n]+1)/2) return n;
    if (k < (F[n]+1)/2) return find(k, n-1);
    else return find(k - F[n-1] - 1, n-1);
}
void solve(){
    long long n, k;
    cin >> n >> k;
    cout << find(k, n) << endl;
}

int main(){
    faster();
    F[1]=1;
    for (int i=2; i<=50; i++) {
        F[i] = F[i-1]*2 + 1;
    }
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}