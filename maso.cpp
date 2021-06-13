//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n; 
vector <string> resBegin, resEnd;
bool unused[500];
void tryBegin(string s) {
    for (int i=0; i<n; i++) {
        if (!unused[i+'A']) {
            s = s + char(i+'A');
            unused[i+'A'] = true;
            if (s.size()== n) resBegin.push_back(s);
            else 
                tryBegin(s);
            s.pop_back();
            unused[i+'A'] = false;
        }
    }
}
void tryEnd(string s) {
    for (int i=0; i<n; i++) {
        if (!unused[i+'1']) {
            s = s + char(i+'1');
            if (s.size()== n) resEnd.push_back(s);
            else 
                tryEnd(s);
            s.pop_back();
        }
    }
}
void solve(){
    for (int i=0; i<=500; i++) unused[i] = false;
    cin >> n;
    resBegin.clear(); resEnd.clear();
    tryBegin("");
    tryEnd("");
    for (int i=0; i<resBegin.size(); i++) 
        for (int j = 0; j<resEnd.size(); j++) 
            cout << resBegin[i] << resEnd[j] << endl;
}

int main(){
    faster();
    int t=1;
    //cin >> t;
    while (t--)
        solve();
    return 0;    
}