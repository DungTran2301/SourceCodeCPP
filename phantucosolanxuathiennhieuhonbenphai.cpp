//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
vector <int> a, b, f;
void solve(){
    int n; cin>> n;
    a.clear(); a.resize(n);
    b.clear(); b.resize(n);
    f.clear(); f.resize(1000006, 0);
    for (int i=0; i<n; i++) {
        b[i] =-1;
        cin >> a[i];
        f[a[i]]++;
    }
    b[n-1] = -1;
    stack <int> st; st.push(a[n-1]);
    for (int i=n-2; i>=0; i--) {
        while (!st.empty()) {
            if (f[st.top()]>f[a[i]]) {
                b[i] = st.top();
                break;
            }
            else {
                st.pop();
            }
        }
        st.push(a[i]);
    }
    for (int i=0; i<n; i++) cout << b[i] << " ";
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}