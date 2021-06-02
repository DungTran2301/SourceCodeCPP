//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int X[100]={0};
int n;
bool cauhinhcuoi = false;
string sinh(string s){
    int i = n-1;
    while (i>=0 && s[i] == '0') i--;
    if (i==-1) cauhinhcuoi = true;
    else
    {
        s[i] = '0';
        for (int j=i+1; j<n; j++) s[j] = '1';
    }
    return s;
}
void solve(){
    cauhinhcuoi = false;
    string s; cin >> s; n= s.size();
    s = sinh(s);
    if (!cauhinhcuoi) cout << s << endl;
    else for (int i=0; i<n; i++) cout << '1';
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}