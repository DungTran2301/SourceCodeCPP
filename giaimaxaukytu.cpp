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
    string s; cin >> s;
    stack <char> st;
    stack <int> number;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ']') {
            string s1 = "";
            while (st.top() != '[') {
                s1 = st.top() + s1;
                st.pop();
            }
            st.pop();
            int n = number.top();
            number.pop();
            string s2 = "";
            for (int i=0; i<n; i++) s2 += s1;
            for (int i=0; i<s2.size(); i++) st.push(s2[i]);
        } else {
            if (s[i] >= '0' && s[i] <= '9') {
                int tg = 0;
                while (s[i] >= '0' && s[i] <= '9') {
                    tg = tg*10 + (s[i] -'0');
                    i++;
                }
                number.push(tg);
                i--;
            } else {
                if (s[i] == '[') {
                    if (i == 0) {
                        number.push(1);
                    } else {
                        if (s[i-1] < '0' || s[i-1] > '9') number.push(1);
                    }
                    st.push(s[i]);
                }
                else
                    st.push(s[i]);
            }
        }

    }
    string res = "";
    while (st.size()) {
        res = st.top() + res;
        st.pop();
    }
    cout << res << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}