//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int d[105][105][105]={0};
void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	string s1 , s2, s3;
	cin >> s1 >> s2 >> s3;
	for(int i=1; i<=a; i++) {
		for(int j=1; j<=b; j++) {
			for(int k=1; k<=c; k++) {
				if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1])
					d[i][j][k] = 1 + d[i-1][j-1][k-1];
				else 
					d[i][j][k] = max(d[i-1][j][k], max(d[i][j-1][k], d[i][j][k-1]));
			}
		}
	}
	cout << d[a][b][c] << endl;	
}

int main(){
	faster();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}