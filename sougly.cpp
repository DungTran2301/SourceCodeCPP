//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

int uglyNum[10004];

int min(int x, int y, int z){
   if(x < y){
      if(x < z)
         return x;
      else
         return z;
   }
   else{
      if(y < z)
         return y;
      else
         return z;
   }
}
void sinh() {
	int i2 = 0, i3 = 0, i5 = 0;
	int next2mul = 2;
	int next3mul = 3;
	int next5mul = 5;
	int next = 1;
	uglyNum[0] = 1;
	for (int i=1; i<10000; i++){
		next = min(next2mul, next3mul, next5mul);
		uglyNum[i] = next;
		if (next == next2mul){
			i2++;
			next2mul = uglyNum[i2]*2;
		}
		if (next == next3mul){
			i3++;
			next3mul = uglyNum[i3]*3;
		}
		if (next == next5mul){
			i5++;
			next5mul = uglyNum[i5]*5;
		}
	}
}
void solve(){
	int n; cin >> n;
	cout << uglyNum[n-1] << endl;
}

int main(){
	faster();
	sinh();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}