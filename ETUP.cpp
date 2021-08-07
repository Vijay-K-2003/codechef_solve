#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
bool isEven(int p)
{
	return p%2 == 0;
}
int getNextOdd(int al)
{
	for(int i = al+1 ; i < arr.size() ; i++)
	{
		if(!isEven(arr[i]))
			return i;
	}
	return -1;
}
int getNextEven(int al)
{
	for(int i = al+1 ; i < arr.size() ; i++)
	{
		if(isEven(arr[i]))
			return i;
	}
	return -1;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0)
	{
		int n, q;
		cin >> n >> q;
		//int arr[n] = {0};		
		for(int i = 0 ; i < n ; i++)
		{
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		int counter = 0;
		int ans[q];
		int one, two,three;
		for(int i = 0 ; i < q ; i++)
		{
			int lt, rt;
			cin >> lt >> rt;
			for(one = lt; one <= rt ; one++)
			{
				// let m be the first value
				if(isEven(arr[one]))
				{
					two = one;
					for(;two < n ; two++)
					{
						two = getNextOdd(two);
						three = two;
						for(; three < n ; )
						{
							three = getNextOdd(three);
							if(three != -1)
							counter++;
							else
							break;
						}
					}
				}
				else
				{
					two = one;
					for(;two < n ; two++)
					{
						two = getNextEven(two);
						three = two;
						for(; three < n ; )
						{
							three = getNextEven(three);
							if(three != -1)
							counter++;
							else
							break;
						}
					}
				}
			}
			cout << counter << "\n";
		}
	}
	return 0;
}
