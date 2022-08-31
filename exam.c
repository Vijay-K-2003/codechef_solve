# include <stdio.h>

int solve ()
{
    int n = 10;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int main()
{
    int ans = solve();
    printf(
        "%d", ans);
    return 0;
}
