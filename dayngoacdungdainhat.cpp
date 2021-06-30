//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100005];
void solve(){
    string s;
    cin >> s;
    stack <int> st;
    stack <int> me;
    for (int i=0; i < s.size(); i++) {
        a[i] = 0;
        if (s[i] == '(') {
            me.push(i);
            st.push(1);
        }
        else {
            if (!st.empty() && st.top() == 1) {
                a[i] = 1;
                a[me.top()] = 1;
                me.pop();
                st.pop();
            }
            else {
                me.push(i);
                st.push(0);
            }

        }
    }
    int n = s.size();
    int Max = 0;
    for (int i=1; i<n; i++) {
        if (a[i]!=0) {
            a[i] = a[i-1] + a[i];
            if (a[i] > Max) Max = a[i];
        }
    }
    cout << Max << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}