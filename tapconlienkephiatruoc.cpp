//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n, k; 
int a[10005];
void print() {
    for (int i=1; i<=k; i++) cout << a[i] << ' ';
    cout << endl;
}
void sinh() {
    for (int i=k; i>=1; i--) {
        if (a[i]-a[i-1] > 1) {
            a[i]--;
            for (int j=i+1; j<=k; j++) {
                a[j] = n-k+j;
            }
            print(); return;
        }
        if (i==1) {
            if (a[1] == 1) {
                for (int j=1; j<=k; j++) {
                    a[j] = n-k+j;
                }
                print();
            }
            else {
                a[i]--;
                for (int j=i+1; j<=k; j++) {
                    a[j] = n-k+j;
                }
                print(); return;
            }
        }
    } 
}
void solve(){
    cin >> n >> k;
    for (int i=1; i<=k; i++) cin >> a[i];
    sinh();
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}