//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
void process(ll tu, ll mau) {
    if (mau%tu==0) {
        cout << "1/" << mau/tu << endl;
        return;
    }

    ll tg = mau/tu+1;
    cout << "1/"<<tg << " + ";
    process(tu*tg-mau, mau*tg);
}
void solve(){
    ll tu, mau;
    cin >> tu >> mau;
    process(tu, mau);
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}