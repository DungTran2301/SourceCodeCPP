//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
void solve(){
    stack <int> st;
    string s;
    int n; cin >> n;

    for (int i=0; i<n; i++) {
        cin >> s;
        if (s == "PUSH") {
            int x;
            cin >> x;
            st.push(x);
        }
        if (!st.empty() && s == "POP") {
            st.pop();
        }
        if (s == "PRINT") {
            if (st.empty()) {
                cout << "NONE" << endl;
            }
            else cout << st.top() << endl;
        }
    }
}

int main(){
    faster();
    int t=1;
    //cin >> t;
    while (t--)
        solve();
    return 0;    
}