#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n,0);
	int cntEve = 0, cntOdd = 0, lastEve = -1, lastOdd = -1;
	for(int i = 0 ; i < n ; i++)
	{
		int temp;
		cin >> temp;
		v[i] = temp;
		if(temp % 2 == 0)
		{
			cntEve++;
			lastEve = i + 1;
		}
		else
		{
			cntOdd++;
			lastOdd = i + 1;
		}
	}

	if(cntEve == 1)
		cout << lastEve ;
	else if(cntOdd == 1)
		cout << lastOdd ;

	return 0;
}
