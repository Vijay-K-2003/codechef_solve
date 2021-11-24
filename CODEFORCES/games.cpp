#include <bits/stdc++.h>
#define vpii vector<pair<int,int>>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	// vpii ha(n,make_pair(0, 0));
	// for(int i = 0 ; i < n ; i++)
	// {
	//	int h, a;
	//	cin >> h >> a;
	//	ha[i] = make_pair(h, a);
	// }
	// this is an Order N^2 Solution
	// int ans = 0;
	// for(int i = 0 ; i < n ; i++)
	// {
	//	for(int j = 0 ; j < n ; j++)
	// 	{
	// 		if(i != j and ha[i].first == ha[j].second)
	// 			ans++;
	// 	}
	// }
	
	// Order N+M solution
	//
	int h[101] = {0};
	int a[101] = {0};
	for(int i = 0 ; i < n ; i++)
	{
		int hh, aa;
		cin >> hh >> aa;
		h[hh]++;
		a[aa]++;
	}
	int ans = 0;
	for(int i = 0 ; i < 101;i++)
	{
		if(h[i]!=0 and a[i]!=0)
		ans += h[i]*a[i];
	}
	
	cout << ans ;


	return 0;
}
