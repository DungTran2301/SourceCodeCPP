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
	if( c == '*' || c == '/' ) return 2;
}
void solve(){
    stack<char> s;
	string str, str1 = "";
	int i = 0;
	cin >> str;
    string res="";
	while (i < str.length()){
		char c = str.at(i);
		if (c != ' '){
			if(c - '0' >= 0 && c - '0' <= 9 || isalpha(c)) str1 += c;
			else{
                if (str1 != "")
				    res += str1 + "#";
				str1 = "";
				if( c == '(') s.push(c);
				else {
					if(c == ')') {
						while(s.top()!= '('){
							res += s.top();
							s.pop();
						}
						if(s.top() == '(') s.pop();
					}
					else{
						while(!s.empty() && convertX(c) <= convertX(s.top())){
							res += s.top();
							s.pop();
						}
						s.push(c);
					}
				}
			}
		}
		i++;
	}
	if( str1 != "" ) res += str1 + "#";
	while(!s.empty()){
		if(s.top()!= '(') res += s.top();
		s.pop();
	}
    stack <long long> num;
    long long ans = 0;
    for (int i=0; i<res.size(); i++) {
        if (res[i] >='0' && res[i]<='9') {
            int tg = 0;
            while (res[i] != '#') {
                tg = tg*10 + (res[i] - '0');
                i++;
            }
            num.push(tg);
        } else if (convertX(res[i]) > 0) {
            long long tg2 = num.top(); num.pop();
            long long tg1 = num.top(); num.pop();
            if (res[i] == '+') 
                num.push(tg1 + tg2);
            if (res[i] == '-') 
                num.push(tg1 - tg2);
            if (res[i] == '*') 
                num.push(tg1 * tg2);
            if (res[i] == '/') 
                num.push(tg1 / tg2);
        }
    }
    cout << num.top() << endl;
}

int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;    
}