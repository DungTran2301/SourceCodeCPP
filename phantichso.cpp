//
// created by:DungTD
//
#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

bool cauhinhcuoi = false;
vector <int> a;
void print() {
    cout << "(";
    for (int i=0; i<a.size()-1; i++) cout << a[i] << " ";
    cout << a[a.size()-1] << ") "; 
}
void sinh (int n) {
    int i = a.size() - 1;
    int sum = n;
    while (i > -1 && a[i] == 1) {
        sum -= a[i];
        i--; a.pop_back();
    }
    // cout << "-" << i << "-";
    if (i == -1) cauhinhcuoi = true;
    else {
        a[i] = a[i]-1;
        sum -=1;
        int tg = a[i];
        while (sum < n) {
            while (sum+tg <= n) {
                sum += tg;
                a.push_back(tg);
            }
            tg--;
        }
    }
}
void solve(){
    int n; cin >> n;
    cauhinhcuoi = false;
    a.clear();
    a.push_back(n);
    while (!cauhinhcuoi) {
        print();
        sinh(n);
    }
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