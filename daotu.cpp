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
	string s;
	getline(cin, s);
	string token;
	stringstream ss(s);
	vector <string> res;
	while (ss >> token) {
		res.push_back(token);
	}
	for (int i=res.size()-1; i>0; i--) cout << res[i] << " ";
	cout << res[0] << endl;
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