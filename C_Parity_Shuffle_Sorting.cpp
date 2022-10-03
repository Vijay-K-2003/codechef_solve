#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, t, x, a[100005];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(cin >> t; t--;)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)cin >> a[i];

		cout << n - 1 << endl;
		if(n > 1)cout << 1 << ' ' << n << endl;
		x = (a[1] + a[n]) % 2 ? a[1] : a[n];
		for(int i = 2; i < n; i++)
		{
			if((x + a[i]) % 2)cout << 1 << ' ' << i << endl;
			else cout << i << ' ' << n << endl;
		}
	}
}
