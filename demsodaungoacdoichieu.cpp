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
	//getline(cin, s); //cin.ignore();
	cin >> s; //cin.ignore();
	//cout << s << " ";
	stack <char> st;
	int d = 0, m = 0;
	for (int i = 0; i < s.size(); i++) {
		if(s[i]=='('){
			if(d<0) {
				d = -d;  m = m + d/2;
				if(d%2) {
					d = 2;
					m++;
				} else d = 1;
			}
			else d++;
		}
		else  d--;
	}
	if(d < 0)  d = -d;
    if(d % 2) d++; m += d/2;
    cout << m << endl;
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