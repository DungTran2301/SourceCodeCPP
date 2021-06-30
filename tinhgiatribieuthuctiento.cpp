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
	cin >> s; cin.ignore();
	stack <int> st;
	for (int i = s.size()-1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9') {
			int tg = s[i] - '0';
			st.push(tg);
		}
		else {
			int a = st.top(); st.pop();
			int b = st.top(); st.pop();
			int tg = 0;
			if (s[i] == '+') {
				tg = a + b;
				st.push(tg);
			}
			if (s[i] == '-') {
				tg = a - b;
				st.push(tg);
			}
			if (s[i] == '*') {
				tg = a * b;
				st.push(tg);
			}
			if (s[i] == '/') {
				tg = a / b;
				st.push(tg);
			}
		}
	}
	cout << st.top() << endl;
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