//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
struct matrix{
	ll a[11][11] = {0};
};
int n; long long k;
matrix mulMatrix(matrix A, matrix B){
	matrix tg;
	for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int t=0; t<n; t++) {
                tg.a[i][j] += A.a[i][t]*B.a[t][j];
            }
            tg.a[i][j] %= base;
        }
    }
	return tg;
}
 
matrix powMatrix(matrix a, ll p){
	if (p == 1) return a;
	matrix tg = powMatrix(a, p / 2);
	if (p%2 == 0) return mulMatrix(tg, tg);
	else return mulMatrix(mulMatrix(tg, tg), a);
}
 
void solve(){
	cin >> n >> k;
	matrix tg;
    for (int i=0; i<n; i++) 
        for (int j=0; j<n; j++) cin >> tg.a[i][j];
	matrix A = powMatrix(tg, k);
	for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << A.a[i][j] << " ";
        }
        cout << endl;
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