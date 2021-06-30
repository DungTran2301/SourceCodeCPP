//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int convertX(char x) {
	if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%' || x == '^') return 1;
	return 0;
}
void solve(){
	string s;
	cin >> s;
	stack <string> st;
	for (int i=s.size()-1; i>=0; i--) {
		switch(convertX(s[i])) {
			case 0:
				st.push(string(1,s[i]));
				break;
			case 1:
				string a = st.top(); st.pop();
				string b = st.top(); st.pop();
				st.push("("+a+s[i]+b+")");
				break;
		}
	}
	while (!st.empty()) {
		cout << st.top(); st.pop();
	}
	cout << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}