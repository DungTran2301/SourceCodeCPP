//
// created by:DungTD
//
#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;
int convertX(char c) {
    if( c == '(') return 0;
	if( c == '+' || c == '-' ) return 1;
	if( c == '*' || c == '/' || c == '%' ) return 2;
	if( c == '^' ) return 3;
}
void solve(){
    stack<char> s;
	string str, str1 = "";
	int i = 0;
	cin >> str;
	while (i < str.length()){
		char c = str.at(i);
		if (c != ' '){
			if(c - '0' >= 0 && c - '0' <= 9 || isalpha(c)) str1 += c;
			else{
				cout<< str1;
				str1 = "";
				if( c == '(') s.push(c);
				else {
					if(c == ')') {
						while(s.top()!= '('){
							cout<< s.top();
							s.pop();
						}
						if(s.top() == '(') s.pop();
					}
					else{
						while(!s.empty() && convertX(c) <= convertX(s.top())){
							cout<< s.top();
							s.pop();
						}
						s.push(c);
					}
				}
			}
		}
		i++;
	}
	if( str1 != "" ) cout<< str1;
	while(!s.empty()){
		if(s.top()!= '(') cout<< s.top();
		s.pop();
	}
    cout << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}