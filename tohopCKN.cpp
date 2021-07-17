//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
//long long a[10000006] = {0}, b[10000006] = {0};
int a[1003][1003]={0};
int C(int k, int n){
    if (k==0||k==n) return 1;
    else 
    for (int i=0;i<=k;i++)
        for (int j=i;j<=n;j++)
            if (i==0||i==j) a[i][j]=1;
            else a[i][j]=(a[i][j-1]+a[i-1][j-1])%base;
    return a[k][n] %base;
}
void solve(){
    int n, k;
    cin >> n >> k;
    cout << C(k, n) << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}