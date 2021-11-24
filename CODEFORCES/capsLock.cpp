#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	string ans = "";
	if (s.length() > 1)
	{
	long long unsigned int cnt = 1;
	for(long long unsigned int i = 0 ; i < s.length() ; i++)
	{
		if(i > 0 && s[i] >= 'A' && s[i] <= 'Z')
		{
			cnt++;	
		}
	}
	if(cnt == s.length())
	{
		// change the case of entire string
		for(long long unsigned int i = 0 ; i < s.length() ; i++)
		{
			if(islower(s[i]))
				ans = ans + (char)toupper(s[i]);
			else if(isupper(s[i]))
				ans = ans + (char)tolower(s[i]);
		}
	}
	else
	{
		ans += s;
	}
	}
	else
	{
		if(islower(s[0]))
			ans = ans +  (char)toupper(s[0]);
		else
			ans = ans +  (char)tolower(s[0]);
	}
	cout << ans ;
	return 0;
}
