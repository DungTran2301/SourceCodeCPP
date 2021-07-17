//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

void solve()
{
    string s;
    int res=1;
    cin >> s;
    int n = s.length();
    vector<vector<bool> > F(n,vector<bool> (n));
    for (int i=0; i<n; i++) F[i][i]=1;
    for (int dd=1; dd<n; dd++)
        for(int i=0; i<n-dd; i++)
        {
            int j = i+dd;
            F[i][j] = ((i+1>j-1 || F[i+1][j-1]) && s[i] == s[j]);
            if (F[i][j]) res = dd+1;
        }
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