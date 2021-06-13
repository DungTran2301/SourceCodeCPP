//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[10];
int res;
int w[10][10];
void findRes() {
	int sum = 0;
	for (int i=1; i<=8; i++) {
		sum += w[i][a[i]];
	}
	res = max(res, sum);
}
bool check(int x, int y) {
	for (int i=1; i<x; i++) {
		if (a[i] == y || abs(i-x) == abs(y-a[i])) return false;
	}
	return true;
}
void Try(int i) {
	for (int j=1; j<=8; j++) {
		if (check(i, j)) {
			a[i] = j;
			if (i==8) findRes();
			Try(i+1);
		}
	}
}
void solve(){
	res = 0;
	for (int i=1; i<=8; i++) {
		for (int j=1; j<=8; j++) cin >> w[i][j];
	}
	Try(1);
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