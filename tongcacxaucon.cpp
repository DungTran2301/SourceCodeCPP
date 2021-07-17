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
	string s; cin >> s; int n=s.size();
	long long res=0; long long sum = 0; long long tmp = 1;
	for (int i=n; i>=1; i--) {
		sum = 0;
		for (int j=1; j<=i; j++) {
			for (int k=j; k<=i; k++)
			sum+=s[k-1]-'0';
		}
		// cout << sum << " ";
		res += sum*tmp;
		tmp*=10;
	}
	cout << res << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}