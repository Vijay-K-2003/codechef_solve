#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(5,0);
	int cnt;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> cnt; 
		a[cnt]++;
	}
	int sum = 0;
	for(int i = 4 ; i >= 1 ; i--)
	{
		if(i == 4)
			sum += a[i];
		else if (i == 3)
		{
			sum += a[3];
			a[1] -= min(a[3], a[1]);
		}
		else if (i == 2)
		{
			sum += a[2] / 2;
			if(a[2] % 2 == 0)
				a[2] = 0;
			else
			{
				a[2] = 1;
				a[1] -= 2;
				sum++;
			}
		}
		else
		{
			if(a[1] > 0)
			{
				if(a[1] % 4 == 0)
					sum += a[1] / 4;
				else
					sum += a[1] / 4 + 1;
			}
		}
	}
	cout << sum << "\n";
	return 0;
}
