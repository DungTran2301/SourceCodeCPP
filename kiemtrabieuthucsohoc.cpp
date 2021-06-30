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
	getline(cin, s); //cin.ignore();
	//cout << s << " ";
	stack <char> st;
	bool ok = true;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ')') {
			ok = false;
			char tg = st.top(); st.pop();
			while (tg != '('){
				if (tg == '+' || tg == '-' || tg == '*' || tg == '/') {
					ok = true;
				}
				tg = st.top(); st.pop();
			}
			if (!ok) break;
		}
		else {
			st.push(s[i]);
		}
	}
	if (ok) cout << "No" << endl;
	else cout << "Yes" << endl;
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