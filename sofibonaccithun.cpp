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
	ll a[3][3];
	matrix(){
		a[0][0] = 0;
		a[0][1] = 1;
		a[1][0] = 1;
		a[1][1] = 1;
	}
};
matrix mulMatrix(matrix A, matrix B){
	matrix tg;
	tg.a[0][0] = A.a[0][0]*B.a[0][0] + A.a[0][1]*B.a[1][0];
	tg.a[0][1] = A.a[0][0]*B.a[0][1] + A.a[0][1]*B.a[1][1];
	tg.a[1][0] = A.a[1][0]*B.a[0][0] + A.a[1][1]*B.a[1][0];
	tg.a[1][1] = A.a[1][0]*B.a[0][1] + A.a[1][1]*B.a[1][1];
	tg.a[0][0] %= base;
	tg.a[0][1] %= base;
	tg.a[1][0] %= base;
	tg.a[1][1] %= base;
	return tg;
}
 
matrix powMatrix(matrix a, ll p){
	if (p == 1) return a;
	matrix tg = powMatrix(a, p / 2);
	if (p%2 == 0) return mulMatrix(tg, tg);
	else return mulMatrix(mulMatrix(tg, tg), a);
}
 
void solve(){
	ll n;
	cin >> n;
	if(n==0){
		cout << 0 << endl;
		return;
	}
	matrix tg;
	matrix A = powMatrix(tg, n);
	cout << A.a[0][1] << endl;
}
int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}