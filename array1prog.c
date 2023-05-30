#include <stdio.h>
int main()
{
    int i, sum, marks[5];
    for(i=0;i<5;i++)
    {
        printf("Enter mark in sub %d\t", i+1);
        scanf("%d", &marks[i]);
        sum= sum + marks[i];
    }
    printf("Average marks=%d", (sum/5));
    return 0;
}
