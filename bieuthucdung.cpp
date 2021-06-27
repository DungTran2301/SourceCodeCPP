//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

void solve(){
	string s; cin >> s;
	int l = 0, r = 0;
	int res = 0; int tmp = 0;
	for (int i=0; i<s.size(); i++) {
		if (s[i] == '[') {
			l++;
			if (tmp > 0) {
				res += tmp; tmp--;
			}
		} else {
			r++;
			tmp = r-l;
		}
	}
	cout << res << endl;
}

int main(){
	faster();
	int t = 1;
	 cin >> t;
	while (t--)
		solve();
	return 0;    
}