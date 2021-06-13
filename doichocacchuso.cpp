#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, k, dd;
	cin >> t;
	string s;
	char tmp;
	while(t--)
	{
		cin >> k >> s;
		for(int i = 0; i < s.size(); i++)
		{
			if(k == 0) break;
			tmp = s[i];
			dd = i;
			for(int j = s.size() - 1; j > i; j--)
			{
				if(s[j] > tmp)
				{
					tmp = s[j];
					dd = j;
				}
			}
			if(dd != i)
			{
				k--;
				swap(s[i], s[dd]);
			}
		}
		cout << s << endl;
	}
}