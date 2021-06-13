//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int tp[1000] = {0};
int n, p, s;
vector <vector <int> > res;
vector <int> prime;
vector <int> sett;
void sang() {
    tp[1] = tp[0] = 1;
    for (int i=2; i<=200; i++) {
        for (int j=i*i; j<=200; j+=i) {
            tp[j] = 1;
        }
    }
}
void find(int total, int index) {
    if (total == s && sett.size() == n) {
        res.push_back(sett);
        return;
    }
    if (total > s || index == prime.size()) {
        return;
    }
    sett.push_back(prime[index]);
    find(total + prime[index], index + 1);
    sett.pop_back();
    find(total, index + 1);
}
void solve(){
    cin >> n >> p >> s;
    prime.clear();
    sett.clear();
    for (int i=p+1; i<=s; i++) {
        if (!tp[i]) {
            prime.push_back(i);
        }
    }
    if (prime.size() >= n)
        find(0, 0);
    cout << res.size() << endl;
    for (int i=0; i<res.size(); i++) {
        for (int j=0; j<res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    res.clear();
}

int main(){
    faster();
    sang();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}