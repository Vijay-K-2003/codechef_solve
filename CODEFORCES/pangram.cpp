#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	int a[26] = {0};
	for(int i = 0 ; i < n ; i++)
	{
		a[s[i] - 'A']++;
	}
	int cnt = 0;
	for(int i = 0 ; i < 26 ; i++)
		if(a[i] > 0)
			cnt++;
	if(cnt == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

