//to copy elements of one array to another array
#include<stdio.h>
int main()
{
    int a1[50], a2[50], i,n;
    printf("Enter the number of elements you want in your array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i=0;i<n;i++)
        {
            printf("element-%d\t",i);
            scanf("%d", &a1[i]);
        }
    printf("\nElements of the first array:\n");
    for (i=0;i<n;i++)
        printf("%d\t", a1[i]);
    for (i=0;i<n;i++)
         a2[i]=a1[i];
    printf("\nElements of the second array:\n");
    for (i=0;i<n;i++)
        printf("%d\t", a2[i]);
    return 0;
}