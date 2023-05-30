//exponent
#include <stdio.h>

float expo(int n, float x)
{
    int i;
    float exp = 1;
    for (i = n - 1; i > 0; --i)
        exp = 1 + x * exp / i;
    return exp;
}
int main(void)
{
    int n;
    float x;
    printf("enter the continuation number\n");
    scanf("%d", &n);
    printf("enter the  value of x\n");
    scanf("%f", &x);

    if (n > 0 && x > 0)
    {
        printf("value of n = %d and x = %0.2f ", n, x);
        printf("\ne^x = %f", expo(n, x));
    }
}