#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> s;
	int max1 = 0;
	int prev = 0;
	int len = 0;
	for(int i = 0 ; i < n ; i++)
	{
		int a;
		cin >> a;

		if(a >= prev)
			len++;
		else
		{
			s.push_back(len);
			len = 1;
		}
		prev = a;
	}
	s.push_back(len);
	sort(s.begin(), s.end());
	max1 = s.back();
	cout << max1 << "\n";
	return 0;
}

