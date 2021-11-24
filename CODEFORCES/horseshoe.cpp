#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	set<int> s;
	s.insert(s1);
	s.insert(s2);	
	s.insert(s3);
	s.insert(s4);
	int ans = 4 - s.size();
	cout << ans ;
	return 0;
}
