//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int res[10005];
void sinh() {
	res[0] = 0;
    res[1] = 1;
    res[2] = 2;
    res[3] = 3;
    for (int i = 4; i <= 10000; i++) {
        res[i] = i;
        for (int x = 1; x <= ceil(sqrt(i)); x++) {
            int temp = x * x;
            if (temp > i)
                break;
            else
                res[i] = min(res[i], 1 + res[i - temp]);
        }
    }
}

void solve(){
	int n;
	cin >> n;
	cout << res[n] << endl;
}

int main(){
	faster();
	sinh();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}