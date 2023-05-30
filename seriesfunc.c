#include <stdio.h>
series(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    series(n);
    return 0;
}
