#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, o ,c;
	cin >> r >> o >> c;
	if((((20-o)*6*6)+c) > r)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	return 0;
}
