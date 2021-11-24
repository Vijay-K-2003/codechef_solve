#include <bits/stdc++.h>
using namespace std;

void MergeSortedIntervals(vector<int>& v, int s, int m, int e) {
	vector<int> temp;

	int i, j;
	i = s;
	j = m + 1;

	while (i <= m && j <= e) {

		if (v[i] <= v[j]) {
			temp.push_back(v[i]);
			++i;
		}
		else {
			temp.push_back(v[j]);
			++j;
		}

	}

	while (i <= m) {
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

}

void MergeSort(vector<int>& v, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSortedIntervals(v, s, m, e);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    MergeSort(a, 0, n - 1);
    int l = 0, r = n + 1;
    while (r - l > 1) {
        int m = (l + r) / 2;
        bool f = true;
        if (2 * m + 1 > n) {
            f = false;
        }
        else {
            vector<int> b;
            int pos_a = 0, pos_b = n - (m + 1);
            for (int i = 0; i < 2 * m + 1; ++i) {
                if (i % 2 == 0) {
                    b.emplace_back(a[pos_b]);
                    ++pos_b;
                }
                else {
                    b.emplace_back(a[pos_a]);
                    ++pos_a;
                }
            }
            for (int i = 1; i < 2 * m + 1; i += 2) {
                if (b[i] >= b[i - 1] || b[i] >= b[i + 1])
                    f = false;
            }
        }
        if (f)
            l = m;
        else
            r = m;
    }
    cout << l << endl;
    vector<int> b;
    int pos_a = 0, pos_b = n - (l + 1);
    for (int i = 0; i < 2 * l + 1; ++i) {
        if (i % 2 == 0) {
            b.emplace_back(a[pos_b]);
            ++pos_b;
        }
        else {
            b.emplace_back(a[pos_a]);
            ++pos_a;
        }
    }
    for (int i = pos_a; i < n - (l + 1); ++i) {
        b.emplace_back(a[i]);
    }
    for (auto &c : b) {
        cout << c << " ";
    }
}