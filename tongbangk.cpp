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
void solve() {
    cin >> n >> k;
    a.clear(), a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    long long L[k+5] = {0};
    L[0]=1;
    for(int i=1; i<=k; i++) {
        for(int j=0; j<n; j++){
            if(i>=a[j])
                L[i] = (L[i]+L[i-a[j]]) % base;
        }
    }
    cout << L[k] << endl;
}

int main(){
	faster();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}