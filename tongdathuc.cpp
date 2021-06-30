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
    string s1, s2;
    getline(cin, s1); getline(cin, s2);
    int a[10003] = {0};
    int tmp = 0;
    int Max = 0;
    for (int i=0; i<s1.size(); i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {
            tmp = tmp * 10 + (s1[i] - '0');
        }
        else {
            if (s1[i] == '^') {
                i++;
                int mu = 0;
                while (s1[i] >= '0' && s1[i] <= '9') {
                    mu = mu*10 + (s1[i] - '0');
                    i++;
                }
                i--;
                a[mu] += tmp;
                tmp=0;
                Max = max(mu, Max);
            }
        }
    }
    for (int i=0; i<s2.size(); i++) {
        if (s2[i] >= '0' && s2[i] <= '9') {
            tmp = tmp * 10 + (s2[i] - '0');
        }
        else {
            if (s2[i] == '^') {
                i++;
                int mu = 0;
                while (s2[i] >= '0' && s2[i] <= '9') {
                    mu = mu*10 + (s2[i] - '0');
                    i++;
                }
                i--;
                a[mu] += tmp;
                tmp=0;
                Max = max(mu, Max);
            }
        }
    }
    cout << a[Max] << "*x^" << Max;
    for (int i=Max-1; i>=0; i--) {
        if (a[i]>0) cout << " + " << a[i] << "*x^" << i;
    }
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
        solve();
    return 0;    
}