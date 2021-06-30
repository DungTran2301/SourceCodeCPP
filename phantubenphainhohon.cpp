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
    f.clear(); f.resize(n);
    for (int i=0; i<n; i++) {
        b[i] =-1;
        f[i] = -1;
        cin >> a[i];
    }
    b[n-1] = -1;
    stack <int> st; st.push(a[n-1]);
    for (int i=n-2; i>=0; i--) {
        while (!st.empty()) {
            if (st.top() < a[i]) {
                b[i] = st.top();
                break;
            }
            else {
                st.pop();
            }
        }
        st.push(a[i]);
    }
    stack <pair<int, int> > st1;
    f[n-1] = -1;
    f[n-2] = -1;
    st1.push(make_pair(a[n-1], n-1));
    st1.push(make_pair(a[n-2], n-2));
    for (int i=n-3; i>=0; i--) {
        while (!st1.empty()) {
            if (st1.top().first > a[i]) {
                f[i] = b[st1.top().second];
                break;
            }
            else {
                st1.pop();
            }
        }
        st1.push(make_pair(a[i], i));
        
    }
    for (int i=0; i<n; i++) cout << f[i] << " ";
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