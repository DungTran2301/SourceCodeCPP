//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

int n, k, sum;
bool ok = 0;
vector<int> a, cb;
vector<bool> dd;
void Try(int s, int tmp) {
	if (ok) return;
	if (tmp == 0) {
		ok = 1;
		return;
	}
	for(int i = 0; i < n; i++) {
		if (s == sum) {
			Try(0, tmp-1);
			continue;
		}
		if (s > sum) return;
		Try(s+a[i], tmp);
	}
}

void init() {
	sum = 0;
	a.clear();
	a.resize(n);
	cb.clear();
	cb.resize(n+1,-1);
	dd.clear();
	dd.resize(n+1,0);
	ok = 0;
}

void solve() {
	cin >> n >> k;
	init();
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum+=a[i];
	}
	if (sum % k == 0) {
		sum/=k;
		Try(0,k);
		cout<< ok << endl;
	}
	else cout << 0 << endl;
}
int main(){
	faster();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}