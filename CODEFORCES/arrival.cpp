#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int imax = INT_MIN;
	int imin = INT_MAX;
	vector<int> a(n,0);
	// 4 3 1 2 2
	// 4 3 2 1 2 
	// 4 3 2 2 1
	// 2sec
	// imax = 0 	0sec
	// imin = n-1	0sec
	// imax = x 	xsec
	// imin = y 	n-1-ysec
	for(int i = 0 ; i < n ; i++)
	{
		int temp;
		cin >> temp;
		a[i] = temp;
	}
	int maxele = *max_element(a.begin(), a.end());
	int minele = *min_element(a.begin(), a.end());
	int idxmax = 0;
	int idxmin = n-1;
	// cout << "Max " << maxele << " Min " << minele << "\n";
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == maxele)
		{
			idxmax = i;
			break;
		}
	}
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == minele)
		{
			idxmin = i;
		}
	}
	int ans = idxmax + n - 1 - idxmin;
	if(idxmax > idxmin)
	ans -= 1;
	cout << ans ;

	return 0;
}
