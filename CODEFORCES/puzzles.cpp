#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	vector<int> f(m,0);
	for(int i = 0 ; i < m ; i++)
		cin >> f[i];

	sort(f.begin(), f.end());

	if(n == m)
		cout << *(f.end()-1) - *f.begin();
	else
	{
		// int i = m-n;
		// int a, b;
		// a = *(f.end() - 1) - *(f.begin() + i);
		// b = *(f.end() - i - 1) - *f.begin();
		int minRange = INT_MAX;
		for(auto it = f.begin(); it < f.end() ; it++)
		{
			if(it+n-1 < f.end())
			{
				int temp = *(it+n-1) - *it;
				if(temp < minRange)
					minRange = temp;
			}
		}
		// cout << "A is " << a << " B is " << b ;
		// cout << "fend is " << *f.end() << " fend - i is " << *(f.end() - i);
		// cout << "fbegin is " << *f.begin() << " fbegin + i is " << *(f.begin() + i);
		// if(a >= b)
		// 	cout << b << "\n" ;
		// else
		//	cout << a << "\n" ;
			cout << minRange ;
	}

	return 0;
}
