//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int n, X[100], check[100], count = 1;
void print(){
    //cout << "\n" << count++ << ": ";
    for (int i=1; i<=n; i++) cout << X[i];
    cout << " ";

}

void backTrack(int i){
    for (int j=n; j>=1; j--){
        if (check[j]==0){
            X[i]=j;
            check[j]=1;
            if (i==n) print();
            else backTrack(i+1);
            check[j] = 0;
        }
    }
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