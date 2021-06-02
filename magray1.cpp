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
	int n; cin >> n;
	long k=pow(2,n);
	string s[k+5];
    s[1]='0';
    s[2]='1';
    int t=2;
    if (n>1) {
        int l;
        for (int i=2; i<=n; i++) {
            l=t*2;
            for (int j=1; j<=t; j++) {
                s[l-j+1]= "1" +s[j];
                s[j]="0" + s[j];
            }
            t=l;
        }
    }
	for (int i=1; i<=k; i++) cout << s[i] << " ";
	cout << endl;
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