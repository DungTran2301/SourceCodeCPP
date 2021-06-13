//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

string s;
int n, X[100], check[100], count = 1;
void print(){
    //cout << "\n" << count++ << ": ";
    for (int i=1; i<=n; i++) cout << s[X[i]-1];
    cout << " ";

}

void backTrack(int i){
    for (int j=1; j<=n; j++){
        if (check[j]==0){
            X[i]=j;
            check[j]=1;
            if (i==n) print();
            else backTrack(i+1);
            check[j] = 0;
        }
    }
}

void solve(){
    cin >> s;
    n = s.size();
    backTrack(1);
    cout << endl;
    
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}