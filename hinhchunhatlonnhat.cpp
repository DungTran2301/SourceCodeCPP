//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n;
vector <ll> a;
void solve(){
	cin >> n;
	a.clear(); a.resize(n);
	for (int i=0; i<n; i++) cin >> a[i];
	stack <int> st;
	ll max_area = 0;
	int i=0;
	while (i<n) {
		if (st.empty() || a[st.top()] <= a[i]) st.push(i++);
		else {
			int tmp = st.top(); st.pop();
			ll area = a[tmp] * (st.empty() ? i : (i - st.top() - 1));
			if (area > max_area) max_area = area;
		}
	}
	while (!st.empty()) {
		int tmp = st.top(); st.pop();
		ll area = a[tmp] * (st.empty() ? i : (i - st.top() - 1));
		if (area > max_area) max_area = area;
	}
	cout << max_area << endl;
}

int main(){
	faster();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}