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
	for (int i=0; i<s.size()-1; i++) {
		if (s[i] == '1') {
			if (s[i+1] == '0') s[i+1] = '1';
			else s[i+1] = '0';
		}
	}
	cout << s << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
		solve();
	return 0;    
}