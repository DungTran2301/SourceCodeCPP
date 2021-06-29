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
	string a, b;
	cin >> a >> b;
	ll s1=0, s2=0;
	int tg=1;
	for (int i=a.size()-1; i>=0; i--) {
		if (a[i] == '1') {
			s1+=tg;
		}
		tg*=2;
	}
	tg=1;
	for (int i=b.size()-1; i>=0; i--) {
		if (b[i] == '1') {
			s2+=tg;
		}
		tg*=2;
	}
	cout << s1*s2 << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}