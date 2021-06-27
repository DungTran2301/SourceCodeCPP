//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int check[1000005] = {0};
void solve(){
	int n; cin >> n;
	int x;
	int res = 0;
	for (int i=0; i<n; i++) {
		cin >> x;
		check[x] = check[x-1] + 1;
		res =  max(check[x], res);
	}
	cout << n-res << endl;
}

int main(){
	faster();
	int t=1;
	//cin >> t;
	while (t--)
		solve();
	return 0;    
}