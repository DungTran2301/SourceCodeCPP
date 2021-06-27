//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
struct Job{
    int id;
    int be, en;
};
bool cmp(Job x, Job y) {
    return x.en > y.en;
}
void solve(){
    int n; cin >> n;
    vector <Job> a(n);
    vector <int> F(10005, 0);
    for (int i=0; i<n; i++) {
        cin >> a[i].id >> a[i].be >> a[i].en;
    }
    sort(a.begin(), a.end(), cmp);

    int res=0, dem = 0;
    for (int i=0; i<n; i++) {
        while (a[i].be > 0 && F[a[i].be]) a[i].be--;
        if (a[i].be > 0 && !F[a[i].be]) {
            res += a[i].en;
            dem++;
            F[a[i].be] = 1;
        }
    }
    cout << dem << " " << res << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}