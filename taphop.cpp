//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n, k, s, res; 
int a[100];
void backTrack(int i) {
    for (int j = a[i-1]+1; j<=n-k+i; j++) {
        a[i] = j;
        if (i==k) {
            int tg = 0;
            for (int r=1; r<=k; r++) {
                tg += a[r];
            }
            if (tg==s) res++;
        }
        else backTrack(i+1);
    }
}
void solve(){
    for (int i=1; i<=10; i++) a[i] = 0;
    res=0;
    backTrack(1);
    cout << res << endl;
}

int main(){
    faster();
    int t=1;
    //cin >> t;
    while (true) {
        cin  >> n >> k >> s;
        if (n==0 &&  k==0 && s==0) break;
        solve();
    }
        
    return 0;    
}