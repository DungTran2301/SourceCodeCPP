//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n, k, a[100];
int count = 1;
bool cauhinhcuoi = false;
void sinh(){
    int i=k;
    while (i>0 && a[i] == n-k+i) i--;
    if (i==0)
        cauhinhcuoi = true;
    else
    {
        a[i]++;
        for (int j=i+1; j<=k; j++){
            a[j] = a[j-1] + 1;
        }
    }
    
}
void printf(){
    for (int i=1; i<=k; i++) cout << char(a[i]+'A'-1);
    cout << endl;
    return;
}
void solve(){
    cin >> n >> k;
    for (int i=1; i<=k; i++) a[i] = i;
    cauhinhcuoi = false;
    while (!cauhinhcuoi){
        printf();
        sinh();
        
    }
}

int main(){
    faster();
    int t=1;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}d