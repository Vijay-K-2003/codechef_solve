#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t-- > 0)
	{
		int k;
		cin >> k;
		bool ok = true;
		for(int i = 0 ; i < k ; i++)
		{
			string s;
			cin >> s;
			if(!ok)
				continue;
			bool lang1 = true, lang2 = true;
			
			for(auto ch : s)
			{
				if(ch >= 'a' && ch <='m')
					lang1 = false;
				else if(ch >='N' && ch <= 'Z')
					lang2 = false;
				else
					ok = false;
			}
			if(!lang1 && !lang2)
				ok = false;
		}
		if(ok)
		cout << "YES\n";
		else
		cout << "NO\n";
	}
	return 0;
}