#include <bits/stdc++.h>
using namespace std;

void testcase()
{
	long a, b;
	cin >> a >> b;
	if(a%b != 0)
		cout << b - a % b << "\n";
	else 
		cout << "0\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t-- > 0)
		testcase();

	return 0;
}
