//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100][100];
int n, s; 
bool cauhinhcuoi = false;
int X[100];
vector <vector <int> > res;
void print() {
    long long sum = 0;
    for (int i=1; i<=n; i++) {
        sum += a[i][X[i]];
    }
    vector <int> v;
    if (sum == s) {
        for (int i=1; i<=n; i++) {
            v.push_back(X[i]);
        }
        res.push_back(v);
    }
}
void sinh(){
    int i=n-1;
    while(i > 0 && X[i] > X[i+1]) i--;
    if (i==0) cauhinhcuoi = true;
    else{
        int k = n;
		while(X[k] < X[i])	k--;			
		int tmp = X[i];
        X[i]=X[k];	
        X[k]=tmp;	
		int l=i+1, r=n;
		while(l<=r){
			int tmp=X[l];	X[l]=X[r];	X[r]=tmp;
			l++;	r--;
		}
    }
}
void solve(){
    
    cin >> n >> s;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) cin >> a[i][j];
    }
    for (int i=1; i<=n; i++) X[i] = i;
    while (!cauhinhcuoi) {
        print();
        sinh();
    }
    cout << res.size() << endl;
    for (int i=0; i<res.size(); i++) {
        for (int j=0; j<n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;    
}