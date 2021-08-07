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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(a == b && c == d)
			cout << "YES" << "\n";
		else if(a == c && b == d)
			cout << "YES" << "\n";
		else if(a == d && c == b)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
