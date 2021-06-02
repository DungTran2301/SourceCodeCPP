//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100];
int res=0, n, k;
vector <int> v;
void backTrack(int index) {
	if (v.size() == k) {
		res++; return;
	}
	for (int i=index; i<n; i++) {
		if (v.empty()) {
			v.push_back(a[i]);
			backTrack(i+1);
			v.pop_back();
		} else {
			if (a[i] > v.back()) {
				v.push_back(a[i]);
				backTrack(i+1);
				v.pop_back();
			}
		}
	}
}
void solve(){
	cin >> n >> k;
	for (int i=0; i<n; i++) cin >> a[i];
	backTrack(0);
	cout << res << endl;
}

int main(){
	faster();
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;    
}