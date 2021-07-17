//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b) {
    return (a.first < b.first) || (a.first == b.first && a.second < b.second);
}
void solve() {
    int n;
    cin >> n;
    vector<pair<int,int> > a(n);
    vector<int> L(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i <n; i++) {
        L[i] = 1;
        for(int j = 0; j < i; j++)
            if (a[i].first > a[j].second) L[i] = max(L[i], L[j]+1);
    }
    int res = 0;
    for(int i = 0; i < n; i++)
        res = max(res, L[i]);
    cout << res << endl;
}

int main(){
	faster();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}