#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int a, b;
    printf("Enter a number : \n");
    scanf("%d%d", &a, &b);

    int sum = add(a, b);
    
    printf("Sum is %d", sum);
    return 0;
}