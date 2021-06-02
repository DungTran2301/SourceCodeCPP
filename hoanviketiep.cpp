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
    int n, k;
    cin >> n;
    int X[1004] = {0};
    for (int i=1; i<=n; i++) cin >> X[i];
    int i=n-1;
    while(i > 0 && X[i] > X[i+1]) i--;
    if (i==0) {
        for (int i=1; i<=n; i++) cout << i << " ";
        cout << endl;
        return;
    }
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
        for (int i=1; i<=n; i++) cout << X[i] << " ";
        cout << endl;
        return;
    }
}

int main(){
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}