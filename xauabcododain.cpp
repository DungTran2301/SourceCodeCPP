//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100], n;
int count=1;
void incauhinh(){
    for (int i=1; i<=n; i++) 
        cout << char(a[i] + 'A');
    cout << " ";
    return;
}
void backTrack(int i){
    for (int j=0; j<2; j++){
        a[i]=j;
        if (i==n) incauhinh();
        else backTrack(i+1);
    }
    return;
}
int main(){
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        backTrack(1);
        cout << endl;
    }
    return 0;
}