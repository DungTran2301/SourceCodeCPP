//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
long long a[100];
int X[100]={0};
int dem = 0;
bool cauhinhcuoi = false;
int n; long long k;
void sinh(){
    int i = n;
    while (i>0 && X[i] == 1) i--;
    if (i==0) cauhinhcuoi = true;
    else
    {
        for (int j= i; j<=n; j++) X[j] = 1 - X[j];
    }
    
}
void incauhinh(){
	long long sum = 0;
    for (int i=1; i<=n; i++){
        sum += a[i] * X[i];
    }
	if(sum == k) {
		dem++;
		for (int i=1; i<=n; i++) {
			if (X[i] == 1) {
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
    
}
void solve(){
	cin >> n >> k;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int i=1; i<=n; i++) X[i]=0;
	cauhinhcuoi = false;
    while (!cauhinhcuoi){
        incauhinh();
        sinh();
    }
	cout << dem;
}

int main(){
	faster();
	int t = 1;
	//cin >> t;
	while (t--)
		solve();
	return 0;    
}