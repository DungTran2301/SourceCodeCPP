//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

int n, k;
vector<int> a;
vector<vector<int> > f;

void solve() {
	cin >> n >> k;
	a.clear(); a.resize(n+1);
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		a[i] %= k;
	}
	f.clear(); f.resize(n+1, vector<int>(k+1, INT8_MIN));
	f[0][0]=0;
	for(int i=1; i<=n; i++) {
		for(int j=0; j<k; j++) {
			f[i][j]=max(f[i-1][j], f[i-1][ (j-a[i]+k) % k ] + 1);
		}
	}
	cout<<f[n][0]<<endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}