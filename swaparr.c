// To swap two Values.
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b;
    printf("Please enter the two numbers to swap their values:\n");
    scanf("%d %d", &a, &b);
    printf("Original: %d %d\n", a, b);
    swap(&a, &b);
    printf("Swapped: %d %d\n", a, b);
    return 0;
}