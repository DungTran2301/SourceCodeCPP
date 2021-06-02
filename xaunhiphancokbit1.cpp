//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int a[100], n, k, sum=0;
int count=1;
void incauhinh(){
    //cout << endl << count++ << ": ";
    for (int i=1; i<=n; i++) cout << a[i];
    cout << endl;
    return;
}
void backTrack(int i){
    for (int j=0; j<2; j++){
        sum += j;
        if(sum>k) {
            sum -= j;
            return;
        }
        a[i]=j;
        if (i==n) {
            if (sum == k)
            incauhinh();
        }
        else backTrack(i+1);
        sum-=j;
    }
    return;
}
int main(){
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        sum = 0;
        backTrack(1);
        //cout << endl;
    }
    return 0;
}