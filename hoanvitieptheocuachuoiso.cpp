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
    int n; cin >> n;
    string s;
    cin >> s;
    int i = s.size() - 2;
    while (i > -1 && s[i] >= s[i+1]) i--;
    if (i == -1) {
        cout << n << " " << "BIGGEST" << endl;
    }
    else
    {
        int k = s.size()-1;
		while(s[k] <= s[i])	k--;			
		char tmp = s[i];
        s[i]=s[k];	
        s[k]=tmp;	
		int l=i+1, r=s.size()-1;
		while(l<=r){
			char tmp=s[l];	s[l]=s[r];	s[r]=tmp;
			l++;	r--;
		}
        cout << n << " " << s << endl;
    }
    
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}