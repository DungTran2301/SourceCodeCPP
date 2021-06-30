//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int convertX(char c) {
    if (c=='+' || c == '-') return 1;
    return 0;
}
void solve(){
    string s;
	cin >> s;
	stack <char> st;
    stack <int> dau;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ')'){
            string tg = "";
            if (!dau.empty() && dau.top()) {
                while (st.top() != '(') {
                    if (st.top() == '+') tg = '-' + tg;
                    else
                    if (st.top() == '-') tg = '+' + tg;
                    else
                    tg = st.top() + tg;
                    st.pop();
                }
                dau.pop();
            } else {
                while (st.top() != '(') {
                    tg = st.top() + tg;
                    st.pop();
                }
                if (!dau.empty()) dau.pop();
            }
            st.pop();
            for (int i=0; i<tg.size(); i++) {
                st.push(tg[i]);
            }
        }
        else {
            if (s[i] == '(' && !st.empty()) {
                if (st.top() == '-') dau.push(1);
                if (st.top() == '+') dau.push(0);
            }
            st.push(s[i]);
        }
    }
    string res = "";
    while (!st.empty()){
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