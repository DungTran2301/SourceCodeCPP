//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
//long long a[10000006] = {0}, b[10000006] = {0};
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int b[1003] = {0};
    b[0]=1;
    int Max = 0;
    for (int i=1; i<n; i++) {
        for (int j=i-1; j>=0; j--) {
            if (a[i] > a[j] && b[j] + 1 > b[i]){
                b[i] = b[j] + 1;
                if (b[i] > Max) Max = b[i];
            }
        }
    }
    cout << Max;
}

int main(){
    faster();
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;    
}