//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
long long xuli(long long a, long long b){
    if (b == 0) return 1;
    if ( b % 2 == 0){
        long long tg = xuli(a,b/2);
        return (tg*tg)%base;
    }
    else{
        long long tg = xuli(a,b-1);
        return (tg*a)%base;
    }
}
void solve(){
    int a, b;
    cin >> a >> b;
    cout << xuli(a, b) << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}