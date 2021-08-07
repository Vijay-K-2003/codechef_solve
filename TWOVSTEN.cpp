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
		int x;
		cin >> x;
		if(x%10 == 0)
			cout << "0" << "\n";
		else if(x%5 == 0)
			cout << "1" << "\n";
		else
			cout << "-1" << "\n";
	}
	return 0;
}
