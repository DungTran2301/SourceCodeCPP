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
	cin >> s; 
	int res = 0;
	stack <char> st;
	for (int i = 0; i < s.size(); i++) {
		if(s[i]==')' && st.empty()){
			st.push('(');
			res ++;
			continue;
		}
		if (s[i] == ')' && !st.empty() && st.top() == '(') {
			st.pop();
			continue;
		}
		st.push(s[i]);
	}
    cout << res + st.size()/2 << endl;
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