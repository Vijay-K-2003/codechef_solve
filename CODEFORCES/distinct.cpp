#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin, s);
	// cout << "S is " << s;

	set<char> a;
	for(int i = 0 ; i < s.length() ; i++)
		if(s[i] != '{' && s[i] != ' ' && s[i] != '}' && s[i] != ',')
			a.insert(s[i]);
	cout << a.size() ;
	return 0;
}
