#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int ans = max(a+b+c, a*b*c);
	ans = max(ans, (a+b)*c);
	ans = max(ans, a*(b+c));
	ans = max(ans, a*b + c);
	ans = max(ans, a+(b*c));
	
	cout << ans ;

	return 0;
}
