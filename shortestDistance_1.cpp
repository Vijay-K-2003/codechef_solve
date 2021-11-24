#include <bits/stdc++.h>
using namespace std;

double getMinDist(vector<pair<int, int>> a)
{
    double distance = DBL_MAX;
    for (int i = 0 ; i < n ; i++)
    {
        pair<int, int> p = a[i];
        for (int j = i+1 ; j < n ; j++)
        {
            pair<int, int> q = a[j];
            double temp = sqrt(pow((double)(p.first - q.first), 2) + pow((double)(p.second - q.second), 2));
            if (temp < distance)
                distance = temp;
        }
    }
    return distance;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n, make_pair(0, 0));
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    double dist
    // printf("%0.2f\n%d\t%d", distance, count, n);
    printf("%0.2f", distance);

    return 0;
}