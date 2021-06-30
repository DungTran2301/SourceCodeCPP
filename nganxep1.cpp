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
    vector <int> st;
    string s;
    while (cin >> s) {
        if (s == "push") {
            int x;
            cin >> x;
            st.push_back(x);
        }
        if (st.size() && s == "pop") {
            st.erase(st.begin() + st.size()-1);
        }
        if (s == "show") {
            for (int i=0; i<st.size(); i++) cout << st[i] << " ";
            if (st.size() == 0) cout << "empty";
            cout << endl;
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