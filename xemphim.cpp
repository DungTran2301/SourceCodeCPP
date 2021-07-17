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
    int s, n; cin >> s >> n;
	vector <int> a(s+5, 0);
    a[0]=1;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        for (int j = s; j >=0; j--)
            if (a[j] == 0 && a[j-x] == 1) a[j]=1;
    }
    for (int j = s; j>=0; j--) {
        if (a[j]) {
            cout << j << endl;
            return;
        }
    }
}

int main(){
	faster();
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;    
}