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
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + (sizeof(arr) / sizeof(arr[0])));
		int mindiff = 0;
		for(int i = 0 ; i < n - 1 ; i++)
		{
			mindiff = min(mindiff, (arr[i+1] - arr[i]) );
		}
		cout << mindiff << "\n";
	}
	return 0;
}