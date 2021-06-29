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
char find(long long k, long long n) {
    if (n==1) return 'A';
    if (n==2) return 'B';
    if (k <= F[n-2]) return find(k, n-2);
    else return find(k - F[n-2], n-1);
}
void solve(){
    long long n, k;
    cin >> n >> k;
    cout << find(k, n) << endl;
}

int main(){
    faster();
    F[1] = F[2] = 1;
    for (int i=3; i<=93; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}