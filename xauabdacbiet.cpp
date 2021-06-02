//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
vector <string> res;
bool check(string s, int k){
	int dem = 0;
	for (int i=0; i<s.size(); i++) {
		dem=0;
		while (s[i] == 'A' && i < s.size()) {
			dem++;
			i++;
		}
		if (dem == k) return true;
	}
	return false;
}
void solve(){
	int n, k; cin >> n >> k;
	string s="";
	s.resize(n,'A');
	res.clear();
	while (true) {
		int i=n-1;
		if (check(s, k)) res.push_back(s);
		while (s[i] == 'B' && i >= 0){
			s[i] = 'A'; i--;
		}
		if (i == -1) break;
		else {
			s[i]= 'B';
		}
		//cout << s << endl;
	}
	cout << res.size() << endl;
	for (string t : res) cout << t << endl;
}
int main(){
	faster();
	int t = 1;
	//cin >> t;
	while (t--)
		solve();
	return 0;    
}