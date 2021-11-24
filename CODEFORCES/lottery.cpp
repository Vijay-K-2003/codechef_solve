#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int deno[] = {100, 20, 10, 5, 1};
	int cnt[] = {0, 0, 0, 0, 0};
	int sum = 0;
	for(int i = 0 ; i < 5 ; i++)
	{
		cnt[i] = n / deno[i] ; 
		n = n % deno[i];
		sum += cnt[i];
	}
	cout << sum ;
	return 0;
}
