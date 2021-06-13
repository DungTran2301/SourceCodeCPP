//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
bool check;
int sum = 0, n;
vector <int> a;
void backTrack(int i, int tong) {
    if (!check) {
        for (int j=i; j<n; j++) {
            tong += a[j];
            if (tong == sum/2) {
                check = true; return;
            }
            else
                if (tong+a[j+1] <= sum/2) 
                backTrack(i+1, tong);
            tong-=a[j];
        }
    }
}
void solve(){
    cin >> n;
    sum=0;
    check = false;
    a.clear(), a.resize(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.begin(), a.end());
    if (sum%2!=0) cout << "NO" << endl;
    else
    {
        backTrack(0, 0);
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}