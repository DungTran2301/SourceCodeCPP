//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
bool cmp(int x, int y) {
    return x > y;
}
void solve(){
    string input;
    cin >> input;
    vector<int> a(input.length() + 1);
    for (int i = 0; i < a.size(); ++i)
        a[i] = i + 1;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == 'D') {
            int first = i;
            for (i; i < input.length() && input[i] == 'D'; ++i);
            sort(a.begin() + first, a.begin() + i + 1, cmp);
        }
    }
    for (int i = 0; i < a.size(); ++i)
        cout << a[i];
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