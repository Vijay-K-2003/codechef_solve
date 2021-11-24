#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	// Take input
	int n;
	cin >> n;
	int p;
	cin >> p;
	set<int> a;
	for(int i = 0 ; i < p ; i++)
	{
		int temp;
		cin >> temp;
		a.insert(temp);
	}
	int q;
	cin >> q;
	for(int i = 0 ; i < q ; i++)
	{
		int temp;
		cin >> temp;
		a.insert(temp);
	}
	if(a.size() == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";

	return 0;
}
