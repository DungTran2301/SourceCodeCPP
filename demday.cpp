//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
//#define base long long 123456789
#define ll long long
long long base = 123456789;
using namespace std;
long long find(long long n) {
    if (n==0) return 1;
    if (n%2==0) {
        long long tg = find(n/2)%base;
        return (tg*tg)%base;
    }
    else {
        return ((find(n-1)%base)*2)%base;
    }
}
void solve(){
    long long n;
    cin >> n;
    cout << find(n-1) << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}