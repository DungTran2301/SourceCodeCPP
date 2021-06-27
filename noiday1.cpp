//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[1000006]={0};
struct cmp{
    bool operator()(int a, int b) {return a>b;}
};

void solve(){
    int n;
    cin >> n;
    int x;
    priority_queue <int, vector<int>, cmp> pt;
    for (int i=0; i<n; i++) {
        cin >> x;
        pt.push(x);
    }
    // while (!pt.empty()) {
    //     cout << pt.top() << " ";
    //     pt.pop();
    // }
    long long  res = 0;
    while (pt.size()>1) {
        int tg = pt.top();
        pt.pop();
        tg+=pt.top();
        pt.pop();
        pt.push(tg);
        res+=tg;
    }
    cout << res << endl;
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}