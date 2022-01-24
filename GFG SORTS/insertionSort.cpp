#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) 
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    insertionSort(arr, n);

    return 0;
}