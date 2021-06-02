//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100]={}, n, k;
int count = 1;
void print(){
    //cout << "\n" << count++ << ": ";
    for (int i=1; i<=k; i++) cout << a[i];
    cout << " ";
}
void Try(int i){
    for (int j=a[i-1] + 1; j<=n-k+i; j++){
        a[i] = j;
        if (i==k) print();
        else
        Try(i+1);
    }

}
int main(){
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
    return 0;
}