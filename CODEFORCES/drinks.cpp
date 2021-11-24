#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	double ans = 0.0;
	double sum = 0.0;
	for(int i = 0 ; i < n ; i++)
	{
		int temp ;
		cin >> temp;

		sum = sum + temp;
	}
	ans = ((double)sum / (double)n);
	cout << ans << "\n" ;

	return 0;
}
